#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 100010
#define ll long long
using namespace std;

ll a[maxn];

struct point {

};

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll ans = 0;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j < i;j++) {
            ans += a[j] - a[i];
        }
        // for (int j = 1;j <= n;j++) {
        //     if (i != j && a[j] <= a[i]) {
        //         ans += a[j] - a[i];
        //     }
        // }
    }
    // sort(a + 1, a + 1 + n);
    ans += a[n];
    cout << ans << endl;
    // for (int i = n - 1;i >= 2;i--) {

    // }
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

