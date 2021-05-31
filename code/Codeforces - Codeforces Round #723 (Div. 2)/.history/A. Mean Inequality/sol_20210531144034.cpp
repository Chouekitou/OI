#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 30
using namespace std;

int a[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 2;i < n;i++) {
        if (a[i - 1] + a[i + 1] == 2 * a[i]) {
            swap(a[i - 1], a[i]);
        }
    }
    for (int i = 1;i <= n;i++) {
        cout << a[i] << " ";
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

