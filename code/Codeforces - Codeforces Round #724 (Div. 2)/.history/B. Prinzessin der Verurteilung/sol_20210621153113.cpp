#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 2000
using namespace std;

char a[maxn][maxn];

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

