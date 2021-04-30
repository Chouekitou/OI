#include <fstream>
#include <iostream>
#include <set>
#define maxn 110
using namespace std;

set<int> dp[maxn][maxn];

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    dp[1][1].insert(0);
    dp[1][2].insert(1);
    dp[2][1].insert(1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(set<int>::iterator t=dp[i][j].begin();t!=dp[i][j].end();t++){
                dp[i][j+1].insert(*t+i);
                dp[i+1][j].insert(*t+j);
            }
        }
    }
    if(dp[n][m].find(k)!=dp[n][m].end()) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

