#include <fstream>
#include <iostream>
#include <cstring>
#define ll long long
#define maxn 200010
using namespace std;

int l[maxn], r[maxn];
int edgecount, fedge[maxn], nedge[maxn], edget[maxn];
ll dp[2][maxn];

void conn(int u, int v) {
    edgecount += 1;
    edget[edgecount] = v;
    nedge[edgecount] = fedge[u];
    fedge[u] = edgecount;
    edgecount += 1;
    edget[edgecount] = u;
    nedge[edgecount] = fedge[v];
    fedge[v] = edgecount;
}

void dfs(int pos, int father = -1) {
    dp[0][pos] = dp[1][pos] = 0;
    for (int edge = fedge[pos];edge;edge = nedge[edge]) {
        int t = edget[edge];
        if (t == father) continue;
        dfs(t, pos);
        dp[0][pos] += max(abs(l[pos] - r[t]) + dp[1][t], dp[0][t] + abs(l[pos] - l[t]));
        dp[1][pos] += max(abs(r[pos] - r[t]) + dp[1][t], dp[0][t] + abs(r[pos] - l[t]));
    }
}

void solve() {
    edgecount = 0;
    // memset(edgecount, 0, sizeof(edgecount));
    memset(fedge, 0, sizeof(fedge));
    memset(nedge, 0, sizeof(nedge));
    memset(edget, 0, sizeof(edget));
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> l[i] >> r[i];
    }
    for (int i = 1;i < n;i++) {
        int u, v;
        cin >> u >> v;

    }
    dfs(1);
    cout << max(dp[0][1], dp[1][1]) << endl;
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

