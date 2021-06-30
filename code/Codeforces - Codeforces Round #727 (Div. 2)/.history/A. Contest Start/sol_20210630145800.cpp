#include <fstream>
#include <iostream>
#define ll long long
using namespace std;

void solve() {
    ll n, x, t;
    cin >> n >> x >> t;
    int res = t / x;
    ll ans = 1ll * (0 + min(res - 1, n - 1)) * (min(res - 1, n - 1) + 1) / 2;
    if (n > res) {
        ans += 1ll * (n - res) * res;
    }

    // ll ans1 = max(0ll, n - t / x) * t / x;
    // ll ans2 = min(n - 1ll, t / x - 1ll) * min(n, t / x) / 2ll;
    // cout << ans1 + ans2 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int k;
    cin >> k;
    while (k--) {
        solve();
    }
    return 0;
}

// max(0,n−t/x)⋅t/x+min(n−1,t/x−1)⋅min(n,t/x)/2 .