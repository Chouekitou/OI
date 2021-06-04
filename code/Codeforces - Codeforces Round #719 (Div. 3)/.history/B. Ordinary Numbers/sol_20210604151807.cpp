#include <fstream>
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (ll pw = 1;pw <= n;pw = pw * 10 + 1) {
        for (int d = 1;d <= 9;d++) {
            if (pw * d <= n) {
                ans++;
            }
        }
    }
    cout << ans << endl;
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

