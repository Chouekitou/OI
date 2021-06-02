#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 3000
#define ll long long
using namespace std;

ll a[maxn], dp[maxn][2], pre[maxn];

void solve() {
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    memset(pre, 0, sizeof(pre));
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] ^ a[i];
    }
    ll totalxor = a[1];
    for (int i = 2;i <= n;i++) {
        totalxor ^= a[i];
    }
    if (totalxor == 0) {
        cout << "YES\n";
        return;
    }
    bool yes = !pre[n];
    for (int i = 1;i <= n;i++) {
        for (int j = i + 1;j < n;j++) {
            yes |= (pre[i] == (pre[j] ^ pre[i]) && pre[i] == (pre[n] ^ pre[j]));
        }
    }
    if (yes) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

