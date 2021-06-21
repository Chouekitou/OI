#include <fstream>
#include <iostream>
#include <algorithm>
#include <string>
#define maxn 1010
using namespace std;

char a[maxn][maxn];

int cmp(char x[], char y[]) {
    for (int i = 1;i < maxn;i++) {
        if (x[i] == '') return 0;
        if (y[i] == '') return 1;
        if (x[i] < y[i]) return 0;
        if (x[i] > y[i]) return 1;
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        char c;
        cin >> c;
        for (int j = i;j <= n;j++) {
            a[i][j] = c;
        }
    }
    sort(a + 1, a + 1 + n, cmp);
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

