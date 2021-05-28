#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 1000010
#define ll long long
#define mod 998244353
using namespace std;

ll dp[maxn];
ll count[maxn];

void solve() {
    int n;
    cin >> n;
    memset(dp, 0, sizeof(dp));
    dp[0] = dp[1] = 1;
    for (int i = 1;i <= n;i++) {
        dp[i] = (dp[i - 1] + count[i]) % mod;
    }
    cout << dp[n] << endl;
    return;
}

void calc() {
    for (int i = 1;i <= maxn;i++) {
        int n = i, k = i;
        while (k <= maxn) {
            count[n] += 1;
            n += k;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    calc();
    dp[0] = dp[1] = 1;
    for (int i = 1;i <= maxn;i++) {
        dp[i] = (dp[i - 1] + count[i]) % mod;
    }
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}

