#include <fstream>
#include <iostream>
#include <set>
#define maxn 110
using namespace std;

set<int> dp[maxn][maxn];

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int t=0;t<dp[i][j].size();t++){
                dp[i][j+1].insert(dp[i][j][t]+i);
                dp[i+1][j].insert(dp[i][j][t]+j);
            }
        }
    }
    if(dp[n][m][t]) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

// int dp[maxn][maxn];

// void solve(){
//     int n,m,k;
//     cin>>n>>m>>k;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             dp[i][j]=999999;
//         }
//     }
//     dp[1][1]=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             dp[i][j+1]=min(dp[i][j+1],dp[i][j]+i);
//             dp[i+1][j]=min(dp[i+1][j],dp[i][j]+j);
//             // dp[i][j+1]|=dp[i][j]+i;
//             // dp[i+1][j]|=dp[i][j]+j;
//         }
//     }
//     cout<<dp[n][m]<<endl;
//     if(dp[n][m]<=k) cout<<"YES\n";
//     else cout<<"NO\n";
//     return;
// }

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

