#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int c1, c2, c3, c4;
    c1 = c2 = c3 = c4 = 0;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == 'A') c1 += 1;
    }
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

