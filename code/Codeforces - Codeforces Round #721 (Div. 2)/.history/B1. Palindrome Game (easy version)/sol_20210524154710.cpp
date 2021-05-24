#include <fstream>
#include <iostream>
#define maxn 2000
#define ll long long
using namespace std;

int n;
char s[maxn];

void solve() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> s[i];
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

