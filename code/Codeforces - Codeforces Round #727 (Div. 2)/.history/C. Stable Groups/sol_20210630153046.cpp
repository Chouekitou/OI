#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define maxn 200010
#define ll long long
using namespace std;

ll n, k, x;
ll a[maxn];
ll ans = 1;
vector<ll> need;

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
            need.push_back(ceil((a[i + 1] - a[i]) / x));
        }
    }
    sort(need.begin(), need.end());
    for (vector<ll>::iterator i;i != need.end();i++) {
        if (k >= *i) {
            ans -= 1;
            k -= *i;
        }
    }
    cout << ans << endl;
    return 0;
}

