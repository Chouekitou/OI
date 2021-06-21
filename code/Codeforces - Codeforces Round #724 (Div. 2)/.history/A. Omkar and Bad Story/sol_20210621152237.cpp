#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 200
using namespace std;

int n, a[maxn];

void solve() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    if (a[1] < 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << 101 << endl;
    for (int i = 0;i <= 100;i++) {
        cout << i << " ";
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

