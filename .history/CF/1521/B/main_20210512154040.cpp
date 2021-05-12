#include <iostream>
#include <algorithm>
#include <cstring>
#include <fstream>
#define maxn 100010
using namespace std;

int a[maxn];

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve() {
    int n;
    int x = 1e9 + 7, pos = -1;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        if (a[i] < x) {
            x = a[i];
            pos = i;
        }
    }
    cout << n - 1 << endl;
    for (int i = 0;i < n;i++) {
        if (i == pos) continue;
        cout << pos + 1 << ' ' << i + 1 << " " << x << " " << x + abs(i - pos) << endl;
    }
}

int main() {
    freopen("main.test", "r", stdin);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}