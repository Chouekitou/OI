#include <fstream>
#include <iostream>
#define maxn 800010
using namespace std;

int n, m;
long long a[maxn], b[maxn], d[maxn];
// a:original b:lazylabel d:tree

void build(int l, int r, int p) {
    if (l == r) {
        d[p] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(l, m, p * 2);
    build(m + 1, r, p * 2 + 1);
    d[p] = d[p * 2] + d[(p * 2) + 1];
}

long long getsum(int l, int r, int s, int t, int p) {
    long long  sum = 0;
    if (l == s && t == r) {
        return d[p];
    }
    int m = (s + t) / 2;
    if (b[p]) {
        d[p * 2] += b[p] * (m - s + 1);
        d[p * 2 + 1] += b[p] * (t - m);
        b[p * 2] += b[p];
        b[p * 2 + 1] += b[p];
        b[p] = 0; // reset
    }
    if (l <= m)
        sum += getsum(l, min(r, m), s, m, p * 2);
    if (r > m)
        sum += getsum(max(l, m + 1), r, m + 1, t, p * 2 + 1);
    return sum;
}

void update(int l, int r, int c, int s, int t, int p) {
    if (l <= s && t <= r) {
        d[p] += (t - s + 1) * c;
        b[p] += c;
        return;
    }
    int m = (s + t) / 2;
    if (b[p] && s != t) {
        d[p * 2] += b[p] * (m - s + 1);
        d[p * 2 + 1] += b[p] * (t - m);
        b[p * 2] += b[p], b[p * 2 + 1] += b[p];
        b[p] = 0;
    }
    if (l <= m)
        update(l, min(r, m), c, s, m, p * 2);
    if (r > m)
        update(max(l, m), r, c, m + 1, t, p * 2 + 1);
    d[p] = d[p * 2] + d[p * 2 + 1];
    return;
}

int main() {
    // freopen("main.in", "r", stdin);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, n, 1);
    for (int i = 1; i <= m; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y, k;
            cin >> x >> y >> k;
            update(x, y, k, 1, n, 1);
        }
        if (op == 2) {
            int x, y;
            cin >> x >> y;
            cout << getsum(x, y, 1, n, 1) << endl;
        }
    }
    return 0;
}