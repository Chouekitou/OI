#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 30
using namespace std;

int a[maxn], b[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= 2 * n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + 2 * n);
    for (int i = 1;i <= n;i++) {
        b[(i - 1) * 2 + 1] = a[i];
    }
    for (int i = 1;i <= n;i++) {
        b[i * 2] = a[i + n];
    }
    for (int i = 1;i <= 2 * n;i++) {
        cout << b[i] << " ";
    }
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

