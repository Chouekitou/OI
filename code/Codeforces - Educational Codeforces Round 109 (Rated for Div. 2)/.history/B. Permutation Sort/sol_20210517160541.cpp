#include <fstream>
#include <iostream>
#define maxn 100
using namespace std;

int a[maxn];

bool check(int l, int r) {
    for (int i = l + 1;i <= r;i++) {
        if (a[i] != a[i - 1]) return false;
    }
    return true;
}

void solve() {
    int n;
    bool ok = 1;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        if ((i != 1) && (a[i] != a[i - 1] + 1)) {
            ok = false;
        }
    }
    if (ok) {
        cout << 0 << endl;
        return;
    }
    if (a[1] != 1 && a[n] != n) {
        cout << 3 << endl;
        return;
    }
    int ans = 0;
    if (a[1] != 1) ans++;
    if (a[n] != n) ans++;
    if (ans == 0 && !ok) ans++;
    cout << ans << endl;
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

