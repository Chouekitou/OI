#include <fstream>
#include <iostream>
#define maxn 2000
#define ll long long
using namespace std;

int n;
char s[maxn];

void solve() {
    cin >> n;
    int zerocount = 0;
    for (int i = 1;i <= n;i++) {
        cin >> s[i];
        if (s[i] == 0) zerocount += 1;
    }
    if (zerocount % 2 == 0) cout << "BOB\n";
    else if (zerocount == 1) cout << "DRAW\n";
    else cout << "ALICE\n";
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

