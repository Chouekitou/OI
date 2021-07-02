#include <fstream>
#include <iostream>
#define maxn 100010
#define ll long long
using namespace std;

ll a[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

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

