#include <fstream>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0;i <= 20;i++) {
        if ((n - 111 * i) % 11 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

