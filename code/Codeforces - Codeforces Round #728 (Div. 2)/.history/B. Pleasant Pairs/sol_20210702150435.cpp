#include <fstream>
#include <iostream>
#define maxn 200010
using namespace std;

int a[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1;i <= n;i++) {
        int j = 1;
        while (a[i] * j <= 2 * n) {
            int ind = a[i] * j - i;
            if (ind >= 1 && ind <= n && ind > i) {
                if (a[ind] == j) {
                    ans++;
                }
            }
            j++;
        }
    }
    cout << ans << endl;
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

