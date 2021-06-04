#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 110
using namespace std;

int m[maxn][maxn];

void solve() {
    memset(m, 0, sizeof(m));
    int n;
    cin >> n;
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
    int even = 1, odd;
    if (n % 2 == 0) odd = n * n / 2 + 1;
    else odd = n * n / 2 + 2;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if (i + j % 2 == 1) {
                m[i][j] = odd;
                odd++;
            }
            else {
                m[i][j] = even;
                even++;
            }
        }
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
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

