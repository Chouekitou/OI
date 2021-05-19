#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#define maxn 300010
using namespace std;

int bot_even[maxn], bot_odd[maxn];
int d_even[maxn], d_odd[maxn];
bool isbotodd[maxn];

void solve() {
    bool left[maxn] = {};
    int n, m;
    int oddcount = 0, evencount = 0;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int t;
        cin >> t;
        if (t % 2 == 1) {
            bot_odd[++oddcount] = t;
            isbotodd[i] = 1;
        }
        else {
            bot_even[++evencount] = t;
        }
    }
    for (int i = 1;i <= n;i++) {
        char d;
        cin >> d;
        if (isbotodd[i]) {
            d_odd[i]
        }
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

