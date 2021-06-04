#include <fstream>
#include <iostream>
#include <cstring>
#include <map>
#define ll long long
#define maxn 200010
using namespace std;

map<int, int> m;

void solve() {
    m.clear();
    ll n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int a;
        cin >> a;
        int b = a - i;
        ans += m[b];
        m[b] += 1;
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

