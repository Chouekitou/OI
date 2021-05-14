#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
#define maxn 110
using namespace std;

int t, n, a[maxn];

int cmp(int a, int b) { return a < b; }

void solve() {
    vector<int> ans;
    cin >> n;
    int count[maxn];
    memset(count, 0, sizeof(count));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        count[a[i]] += 1;
    }
    for (int i = 0; i < maxn; i++) {
        if (count[i]) {
            count[i] -= 1;
            ans.push_back(i);
        }
    }
    for (int i = 0; i < maxn; i++) {
        for (int j = 1; j <= count[i]; j++)
            ans.push_back(i);
    }
    for (int i = 1; i <= ans.size(); i++) {
        cout << ans[i - 1] << " ";
    }
    cout << endl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    // freopen("main.in", "r", stdin);
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}