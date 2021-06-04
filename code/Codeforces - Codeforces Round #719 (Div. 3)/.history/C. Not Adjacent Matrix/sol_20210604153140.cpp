#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 110
using namespace std;

int

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
    int even = 1, odd = n * n / 2 + 1;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if (i + j % 2 == 1) {

            }
        }
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

