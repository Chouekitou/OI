#include <fstream>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    char last = ' ';
    bool ok[30] = {};
    bool skip = false;
    for (int i = 1;i <= n;i++) {
        if (skip) continue;
        char c;
        cin >> c;
        if (c != last && ok[c - 'A' + 1]) {
            skip = true;
            continue;
        }
        ok[c - 'A' + 1] = 1;
        last = c;
    }
    if (skip) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    cin.clear();
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

