#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 200010
#define ll long long
using namespace std;

ll n, k, x;
ll a[maxn];
ll ans = 1;

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> k >> x;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1;i < n;i++) {
        if (a[i + 1] - a[i] > x) {
            ans += 1;
            if (k > 0 && (a[i + 1] - a[i] <= 2 * x)) {
                k -= 1;
                ans -= 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

