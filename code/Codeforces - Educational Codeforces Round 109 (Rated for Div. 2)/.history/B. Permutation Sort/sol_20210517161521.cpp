#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 100
using namespace std;

int a[maxn];

bool check(int l, int r) {
    for (int i = l + 1;i <= r;i++) {
        if (a[i] != a[i - 1] + 1) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int pos1, pos2;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        if (a[i] == 1) {
            pos1 = i;
        }
        if (a[i] == n) {
            pos2 = i;
        }
    }
    if (check(1, n)) {
        cout << 0 << endl;
        return;
    }
    sort(a + 1, a + n - 1);
    if (check(1, n)) {
        cout << 1 << endl;
        return;
    }
    sort(a + 2, a + n);
    if (check(1, n)) {
        cout << 2 << endl;
        return;
    }
    // sort(a + 1, a + n);
    cout << 3 << endl;
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

