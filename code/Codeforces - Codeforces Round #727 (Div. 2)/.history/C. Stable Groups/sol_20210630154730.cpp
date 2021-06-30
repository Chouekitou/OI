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
ll ans = 1ll;
vector<ll> need;

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> k >> x;
    for (ll i = 1ll;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (ll i = 1ll;i < n;i++) {
        if (abs(a[i + 1] - a[i] > x)) {
            cout << i << " ";
            ans += 1;
            need.push_back(ceil(abs(a[i + 1] - a[i]) / x) - 1);
        }
    }
    cout << endl;
    for (vector<ll>::iterator i = need.begin();i != need.end();i++) {
        cout << *i << " ";
    }
    cout << endl;
    sort(need.begin(), need.end());
    for (vector<ll>::iterator i = need.begin();i != need.end();i++) {
        if (k >= *i) {
            ans -= 1ll;
            k -= *i;
        }
    }
    cout << ans << endl;
    return 0;
}

