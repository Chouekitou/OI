#include <fstream>
#include <iostream>
using namespace std;

void solve() {
    int n, x, t;
    cin >> n >> x >> t;
    cout << max(0, n - t / x) + min(n - 1, t / x - 1) * min(n, t / x) / 2 << endl;
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

