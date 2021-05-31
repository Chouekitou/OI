#include <fstream>
#include <iostream>
#define maxn 1000000010
using namespace std;

bool dp[maxn];

int main() {
    ios::sync_with_stdio(0);
    calc();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

