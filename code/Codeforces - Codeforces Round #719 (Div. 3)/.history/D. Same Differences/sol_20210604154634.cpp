#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 200010
using namespace std;

int b[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int a;
        cin >> a;
        b[i] = i - a;
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

