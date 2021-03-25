#include <iostream>
#include <fstream>
#include <cstring>
#define maxn 1010
#define ll long long
using namespace std;

int n,a[maxn][maxn];
int count5[maxn][maxn],count2[maxn][maxn];
int dp2[maxn][maxn],dp5[maxn][maxn];
char output[2000];

bool zero=false;
int zx,zy;

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                a[i][j]=10;
                zero=true;
                zx=i,zy=j;
                // break;break;
            }
            // int t=a[i][j];
            while(a[i][j]%2==0){
                count2[i][j]+=1;
                a[i][j]/=2;
            }
            // a[i][j]=t;
            while(a[i][j]%5==0){
                count5[i][j]+=1;
                a[i][j]/=5;
            }
        }
    }
    // if(zero){
    //     cout<<0<<endl;
    //     for(int i=1;i<=zx;i++) cout<<'D';
    //     for(int i=1;i<=n;i++) cout<<'R';
    //     for(int i=zx+1;i<=n;i++) cout<<'D';
    //     return 0;
    // }
    memset(dp2,0x3F,sizeof(dp2));
    memset(dp5,0x3F,sizeof(dp5));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j-1) dp2[i][j]=min(dp2[i][j-1],dp2[i][j]);
            if(i-1) dp2[i][j]=min(dp2[i-1][j],dp2[i][j]);
            
            if(j-1) dp5[i][j]=min(dp5[i][j-1],dp5[i][j]);
            if(i-1) dp5[i][j]=min(dp5[i-1][j],dp5[i][j]);
            if(i==j&&i==1){
                dp2[i][j]=0;
                dp5[i][j]=0;
            }
            dp2[i][j]+=count2[i][j];
            dp5[i][j]+=count5[i][j];
        }
    }
    int move=0;
    if(dp2[n][n]>dp5[n][n]){
        if(dp5[n][n]>1&&zero){
            cout<<1<<endl;
            for(int i=1;i<=zx-1;i++) cout<<'D';
            for(int i=1;i<=n-1;i++) cout<<'R';
            for(int i=zx;i<=n-1;i++) cout<<'D';
            return 0;
        }
        int posx=n,posy=n;
        while(!(posx==1&&posy==1)){
            move+=1;
            if(posx==1){
                output[move]='R';
                posy-=1;
                continue;
            }
            if(posy==1){
                output[move]='D';
                posx-=1;
                continue;
            }
            if(dp5[posx][posy-1]>dp5[posx-1][posy]){
                output[move]='D';
                posx-=1;
            }
            else{
                output[move]='R';
                posy-=1;
            }
        }
        cout<<dp5[n][n]<<endl;
    }
    else{
        if(dp2[n][n]>1&&zero){
            cout<<1<<endl;
            for(int i=1;i<=zx-1;i++) cout<<'D';
            for(int i=1;i<=n-1;i++) cout<<'R';
            for(int i=zx;i<=n-1;i++) cout<<'D';
            return 0;
        }
        int posx=n,posy=n;
        while(!(posx==1&&posy==1)){
            move+=1;
            if(posx==1){
                output[move]='R';
                posy-=1;
                continue;
            }
            if(posy==1){
                output[move]='D';
                posx-=1;
                continue;
            }
            if(dp2[posx][posy-1]>dp2[posx-1][posy]){
                output[move]='D';
                posx-=1;
            }
            else{
                output[move]='R';
                posy-=1;
            }
        }
        cout<<dp2[n][n]<<endl;
    }
    for(int i=move;i>=1;i--){
        cout<<output[i];
    }
    return 0;
}