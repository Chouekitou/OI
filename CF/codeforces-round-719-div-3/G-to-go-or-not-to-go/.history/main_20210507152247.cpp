#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#define maxn 2010
#define ull unsigned long long
using namespace std;

int n,m,w;
ull mp[maxn][maxn];
ull count[maxn][maxn];

//vectors
vector<pair<int,int> > portals;

int dd[4][2]{
    {0,1},
    {0,-1},
    {1,0},
    {-1,0}
};

bool inboundary(int x,int y){
    return 0<x&&x<=n&&y>0&&y<=m;
}

void bfs(int x,int y,ull dis){
    count[x][y]=min(count[x][y],dis);
    for(int i=0;i<4;i++){
        if((mp[x+dd[i][0]][y+dd[i][1]]!=-1)&&inboundary(x+dd[i][0],y+dd[i][0])){
            if(dis+w<count[x+dd[i][0]][y+dd[i][0]]){
                bfs(x+dd[i][0],y+dd[i][0],dis+w);
            }
        }
    }

}

void solve(){
    cin>>n>>m>>w;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mp[i][j];
            if(mp[i][j]!=-1&&mp[i][j]!=0){
                portals.push_back(pair<int,int>(i,j));
            }

        }
    }
    ull ans=UINTMAX_MAX;
    bfs(1,1,0);
    if(count[n][m]){
        ans=min(ans,count[n][m]);
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}

