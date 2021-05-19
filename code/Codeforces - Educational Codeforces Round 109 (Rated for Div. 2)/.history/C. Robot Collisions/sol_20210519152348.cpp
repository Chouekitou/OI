#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <numeric>
#define maxn 300010
using namespace std;

vector<bot> a;
struct bot {
    int x, d;
};

int cmp(int x, int y) {
    return a[x].x < a[y].x;
}

void solve() {
    a.clear();
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        cin >> a[i].x;
    }
    for (int i = 1;i <= n;i++) {
        char c;
        cin >> c;
        a[i].d = c == 'L' ? -1 : 1;
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), cmp);

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

