#include <fstream>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#define maxn 1010
using namespace std;

string a[maxn];
bool used[maxn][100];

// int cmp(string x, string y) {
//     for (int i = 1;i < maxn;i++) {
//         if (x[i] == '\0') return 1;
//         if (y[i] == '\0') return 0;
//         if (x[i] < y[i]) return 1;
//         if (x[i] > y[i]) return 0;
//     }
//     return 0;
// }

void solve() {
    memset(used, 0, sizeof(used));
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        char c;
        cin >> c;
        for (int j = i;j <= n;j++) {
            // a[i][j] = c;
            a[i].push_back(c);
        }
    }
    return;
    sort(a + 1, a + 1 + n);
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if ((a[i][j] - 'a' + 1 >= 1) && (a[i][j] - 'a' + 1 <= 26)) {
                used[i][a[i][j] - 'a' + 1] = 1;
            }
        }
    }
    int minl, minpos;
    for (int l = 1;l <= n + 1;l++) {
        for (int i = 1;i <= 26;i++) {
            if (used[l][i] == 0) {
                minl = l, minpos = i;
            }
        }
    }
    for (int i = 1;i < minl;i++) {
        cout << 'a';
    }
    cout << char('a' + minpos - 1) << endl;
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

