#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define maxn 300010
using namespace std;

struct bot {
    int x, d;
};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<bot> a(n);
    for (int i = 1;i <= n;i++) {
        cin >> a[i].x;
    }
    for (int i = 1;i <= n;i++) {
        char c;
        cin >> c;
        a[i].d = c == 'L' ? -1 : 1;
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

