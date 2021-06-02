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
    }
    ll totalxor = a[1];
    for (int i = 2;i <= n;i++) {
        totalxor ^= a[i];
    }
    if (totalxor == 0) {
        cout << "YES\n";
        return;
    }
    dp[1][0] = a[1];
    dp[n][1] = a[n];
    for (int i = 2;i <= n;i++) {
        dp[i][0] = a[i] ^ dp[i - 1][0];
    }
    for (int i = n - 1;i >= 1;i--) {
        dp[i][1] = a[i] ^ dp[i + 1][1];
    }

    for (int i = 1;i < n;i++) {
        if (dp[i][0] == dp[i + 1][1]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

