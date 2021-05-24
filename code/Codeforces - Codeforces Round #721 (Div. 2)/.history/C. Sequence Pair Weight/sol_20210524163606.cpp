#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
#define maxn 100010
using namespace std;

map<ll, vector<ll>> count;
vector<ll> base;
ll a[maxn];

void solve() {
    count.clear();
    base.clear();
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        count[a[i]].push_back(i);

    }
    for ()
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

