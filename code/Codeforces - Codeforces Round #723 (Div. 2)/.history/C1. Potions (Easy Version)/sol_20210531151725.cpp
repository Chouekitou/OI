#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 2010
#define ll long long
using namespace std;

ll n, a[maxn];
ll dp[maxn][maxn];

void solve() {
    for (int i = 0;i < 2010;i++) {
        for (int j = 0;j < 2010;j++) {
            dp[i][j] = -9999;
        }
    }
    ll hp = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++) {
        for (int k = 0;k <= n;k++) {
            if (dp[i - 1][k - 1] + a[i] >= 0) {
                dp[i][k] = max(dp[i - 1][k], dp[i - 1][k - 1] + a[i]);
            }
            else dp[i][k] = dp[i - 1][k];
        }
    }
    ll maxans = 0;
    for (ll i = 1;i <= n;i++) {
        if (dp[n][i] != -1)
            maxans = max(maxans, i);
    }
    cout << maxans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}

