#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 2010
#define ll long long
using namespace std;

ll n, a[maxn];
ll dp[maxn][maxn];

void solve() {
    memset(dp, 0, sizeof(dp));
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

}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}

