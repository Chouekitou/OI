#include <fstream>
#include <iostream>
#define maxn 800010
#define ll long long
using namespace std;

ll n, m, mod;
long long a[maxn], add[maxn], ss[maxn], mul[maxn];
// a:original add:lazylabel ss:tree

void build(ll l, ll r, ll p) {
    mul[p] = 1;
    if (l == r) {
        ss[p] = a[l];
        return;
    }
    ll m = (l + r) / 2;
    build(l, m, p * 2);
    build(m + 1, r, p * 2 + 1);
    ss[p] = ss[p * 2] + ss[(p * 2) + 1];
}

void push_down(int s, int t, int p) {
    int l = p * 2, r = p * 2 + 1, m = (s + t) / 2;
    if (mul[p] != 1) {
        mul[l] *= mul[p];
        mul[l] %= mod;
        mul[r] *= mul[p];
        mul[r] %= mod;
        add[l] *= mul[p];
        add[l] %= mod;
        add[r] *= mul[p];
        add[r] %= mod;
        ss[l] *= mul[p];
        ss[l] %= mod;
        ss[r] *= mul[p];
        ss[r] %= mod;
        mul[p]=1;
    }
    if (add[p]) {
        ss[l] += add[p] * (m - s + 1);
        ss[r] += add[p] * (t - m);
        add[l] += add[p];
        add[r] += add[p];
        add[l] %= mod, add[r] %= mod;
        add[p] = 0; // reset
    }
}

void up(int p) { ss[p] = ss[p * 2] + ss[p * 2 + 1]; }

long long getsum(int l, int r, int s, int t, int p) {
    long long sum = 0;
    if (l == s && t == r) {
        return ss[p];
    }
    int m = (s + t) / 2;
    push_down(s, t, p);
    if (l <= m)
        sum += getsum(l, min(r, m), s, m, p * 2);
    if (r > m)
        sum += getsum(max(l, m + 1), r, m + 1, t, p * 2 + 1);
    return sum;
}

void update(int l, int r, int c, int s, int t, int p) {//add
    if (l <= s && t <= r) {
        ss[p] += (t - s + 1) * c;
        add[p] += c;
        return;
    }
    int m = (s + t) / 2;
    push_down(s, t, p);//faq
    if (l <= m)
        update(l, min(r, m), c, s, m, p * 2);
    if (r > m)
        update(max(l, m + 1), r, c, m + 1, t, p * 2 + 1);
    ss[p] = ss[p * 2] + ss[p * 2 + 1];
    return;
}

void multi(int l, int r, int c, int s, int t, int p) {
    int mid = (s + t) / 2;
    if (l <= s && t <= r) {
        mul[p] *= c;
        mul[p] %= mod;
        add[p] *= c;
        add[p] %= mod;
        ss[p] *= c;
        ss[p] %= mod;
        return;
    }
    push_down(s, t, p);//faq
    if (mid >= l)
        multi(l, min(r,mid), c, s, mid, p * 2);
    if (mid < r)
        multi(max(mid+1,l), r, c, mid + 1, t, p * 2 + 1);
    up(p);
}

int main() {
    // freopen("./main.in", "r", stdin);
    cin >> n >> m >> mod;
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
            multi(x, y, k, 1, n, 1);
        }
        if (op == 2) {
            int x, y, k;
            cin >> x >> y >> k;
            update(x, y, k, 1, n, 1);
        }
        if (op == 3) {
            int x, y;
            cin >> x >> y;
            cout << getsum(x, y, 1, n, 1) % mod << endl;
        }
    }
    return 0;
}