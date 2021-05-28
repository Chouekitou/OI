#include <fstream>
#include <iostream>
#include <cstring>
#define ll long long
#define maxn 100010
using namespace std;

int l[maxn], r[maxn];
int edgecount, fedge[maxn], nedge[maxn], edget[maxn];
int fa[maxn];

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

void dfs(int pos, int father) {

}

void solve() {
    edgecount = 0;
    memset(edgecount, 0, sizeof(edgecount));
    memset(fedge, 0, sizeof(fedge));
    memset(nedge, 0, sizeof(nedge));
    memset(edget, 0, sizeof(edget));
    memset(fa, 0, sizeof(fa));
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> l[i] >> r[i];
    }
    for (int i = 1;i < n;i++) {
        int u, v;
        cin >> u >> v;

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

