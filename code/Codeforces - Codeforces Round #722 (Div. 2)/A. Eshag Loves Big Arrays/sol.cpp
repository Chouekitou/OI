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
    sort(a + 1, a + n + 1);
    int count = 1;
    for (int i = 2;i <= n;i++) {
        if (a[i] == a[i - 1]) count += 1;
        else break;
    }
    cout << n - count << endl;
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

