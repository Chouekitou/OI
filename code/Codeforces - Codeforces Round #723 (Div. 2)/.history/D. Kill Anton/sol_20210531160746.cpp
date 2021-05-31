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
        if (s[i] == 'N') c2 += 1;
        if (s[i] == 'T') c3 += 1;
        if (s[i] == 'O') c4 += 1;
    }
    for (int i = 1;i <= c1;i++) cout << 'A';
    for (int i = 1;i <= c2;i++) cout << 'N';
    for (int i = 1;i <= c3;i++) cout << 'T';
    for (int i = 1;i <= c4;i++) cout << 'O';
    cout << endl;
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

