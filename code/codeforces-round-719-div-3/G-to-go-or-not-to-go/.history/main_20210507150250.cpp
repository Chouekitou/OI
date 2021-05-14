#include <fstream>
#include <iostream>
#define maxn 2010
#define ull unsigned long long
using namespace std;

int n,m,w;
ull mp[maxn][maxn];

void solve(){
    cin>>n>>m>>w;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mp[i][j];
        }
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}

