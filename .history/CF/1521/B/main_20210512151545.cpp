#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 100010
using namespace std;

int a[maxn];

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    memset(a, 0, sizeof(a));
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