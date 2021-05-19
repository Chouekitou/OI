#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#define maxn 300010
using namespace std;

vector<int> bot_odd, bot_even;

void solve() {
    bot_odd.clear(), bot_even.clear();
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int t;
        cin >> t;
        if (t % 2 == 1)
            bot_odd.push_back(t);
        else
            bot_even.push_back(t);
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

