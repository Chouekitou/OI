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

    }
}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}

