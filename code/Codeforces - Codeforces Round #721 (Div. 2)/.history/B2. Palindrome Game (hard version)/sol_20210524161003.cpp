#include <fstream>
#include <iostream>
#define maxn 2000
#define ll long long
using namespace std;

int n;
char s[maxn];

void solve() {
    cin >> n;
    int zerocount = 0, onecount = 0;
    for (int i = 0;i < n;i++) {
        cin >> s[i];
        if (s[i] == '0') zerocount += 1;
        // else onecount += 1;
    }
    bool is_p = 1;
    for (int i = 0;i < n / 2;i++) {
        if (s[n - i + 1] != s[i]) {
            is_p = 0;
            // break;
        }
        if ((s[i] == 1 || s[n - i + 1] == 1) && s[i] != s[n - i + 1]) {
            onecount += 1;
        }
    }
    if (is_p) {
        if (zerocount % 2 == 0 || zerocount == 1) cout << "BOB\n";
        else cout << "ALICE\n";
    }
    else {
        if (onecount == 1 && zerocount == 2) {
            cout << "DRAW\n";
        }
        else {
            cout << "ALICE\n";
        }
    }
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

