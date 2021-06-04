#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool used[30] = {};
    memset(used, 0, sizeof(used));
    used[s[0] - 'A'] = 1;
    for (int i = 1;i < n;i++) {
        if (s[i] != s[i - 1] && used[s[i] - 'A'] != 0) {
            cout << "YES\n";
            return;
        }
        used[s[i] - 'A'] = 1;
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

