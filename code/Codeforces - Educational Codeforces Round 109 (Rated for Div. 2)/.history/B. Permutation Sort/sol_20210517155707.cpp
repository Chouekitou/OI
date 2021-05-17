#include <fstream>
#include <iostream>
#define maxn 100
using namespace std;

void solve() {
    // cout << "run" << endl;
    int n, a[maxn];
    bool ok = 1;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        // cout << i << " ";
        cin >> a[i];
        if ((i != 1) && (a[i] != a[i - 1] + 1)) {
            // cout << i << endl;
            ok = false;
        }
    }
    if (ok) {
        cout << 0 << endl;
        return;
    }
    if (a[1] == n && a[n] == 1) {
        cout << 3 << endl;
        return;
    }
    int ans = 0;
    if (a[1] != 1) ans++;
    if (a[n] != n) ans++;
    if (ans == 0 && !ok) ans++;
    cout << ans << endl;
    // cout << endl;
    return;
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

