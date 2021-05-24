#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
#define maxn 100010
using namespace std;

map<ll, vector<ll>> count;
// vector<ll> base;
ll a[maxn];

ll calc(vector<ll> v) {
    for (int i = 0;i < v.size();i++) {
        for (int j = i + 1;j < v.size();j++) {

        }
    }
}

void solve() {
    count.clear();
    // base.clear();
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        count[a[i]].push_back(i);
    }
    ll ans = 0;
    for (map<ll, vector<ll>>::iterator i = count.begin();i != count.end();i++) {
        ans += calc(i->second);
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

