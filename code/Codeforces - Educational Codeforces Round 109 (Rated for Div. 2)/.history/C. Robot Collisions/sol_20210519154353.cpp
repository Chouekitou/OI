#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <numeric>
#define maxn 300010
using namespace std;

struct bot {
    int x, d;
};

vector<bot> a(maxn);

int cmp(int x, int y) {
    return a[x].x < a[y].x;
}

void solve() {
    a.clear();
    int n, m;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        cin >> a[i].x;
    }
    for (int i = 0;i < n;i++) {
        char c;
        cin >> c;
        a[i].d = c == 'L' ? -1 : 1;
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), cmp);
    vector<int> ans(n, -1);
    vector<vector<int>> par(2);
    for (int i : ord) {
        int p = a[i].x % 2;
        if (a[i].d == -1) {
            if (par[p].empty()) {
                par[p].push_back(i);
            }
            else {
                int j = par[p].back();
                par[p].pop_back();
                ans[i] = ans[j] = (a[i].x - (a[j].d == 1 ? a[j].x : -a[j].x)) / 2;
            }
        }
        else {
            par[p].push_back(i);
        }
    }
    for (int p = 0;p < 2;p++) {
        while (par[p].size() > 1) {
            int i = par[p].back();
            par[p].pop_back();
            int j = par[p].back();
            par[p].pop_back();
            ans[i] = ans[j] = (2 * m - a[i].x - (a[j].d == 1 ? a[j].x : -a[j].x)) / 2;
        }
    }
    for (int i = 0;i < n;i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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

