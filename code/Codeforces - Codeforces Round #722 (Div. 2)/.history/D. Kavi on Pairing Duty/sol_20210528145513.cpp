#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 1000010
#define ll long long
#define mod 998244353
using namespace std;

ll dp[maxn];

void solve() {
    int n;
    cin >> n;
    memset(dp, 0, sizeof(dp));
    dp[0] = dp[1] = 1;
    for (int i = 0;i <= n;i++) {
        dp[i] = dp[i - 1] +
    }
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

