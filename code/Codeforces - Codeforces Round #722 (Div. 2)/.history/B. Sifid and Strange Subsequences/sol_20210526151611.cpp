#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 100010
using namespace std;

int n, a[maxn];

void solve() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    // if (a[1] > 0)
    int count = 0;
    for (int i = 1;i <= n;i++) {
        if (a[i] <= 0) count += 1;
        else {
            for (int j = 2;j < i;j++) {
                if (a[j] - a[j - 1] < a[i]) {
                    cout << count << endl;
                    return;
                }
            }
            count += 1;
            cout << count << endl;
            return;
        }
    }
    cout << count << endl;
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

