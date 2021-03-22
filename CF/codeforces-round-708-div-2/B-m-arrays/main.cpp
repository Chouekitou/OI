#include <iostream>
#include <fstream>
#include <cstring>
#define maxn 100010
using namespace std;

int t,n,m,a[maxn],mod[maxn];

int calc(int a,int b){
    int ans=0;
    if(mod[a]<mod[b]){
        swap(a,b);
    }
    if(mod[a]<=mod[b]+1){
        mod[a]-=mod[b]+1;
        mod[b]=0;
        
    }
    else{
        mod[a]-=mod[b]+1;
        mod[b]=0;
    }
    return 1;
}

void solve(){
    memset(mod,0,sizeof(mod));
    int ans=0,maxmod=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxmod=max(maxmod,a[i]%m);
        mod[a[i]%m]+=1;
    }
    if(mod[m]) ans+=1;
    if(m%2==0){
        for(int i=1;i<n/2;i++){
            if(mod[i]&&mod[m-i])
                ans+=calc(i,m-i);
        }
        if(mod[m/2]){
            ans+=mod[m/2]/2;
            mod[m/2]&=1;
        }
    }
    else{
        for(int i=1;i<=n/2;i++){
            if(mod[i]&&mod[m-i])
                ans+=calc(i,m-i);
        }
    }
    for(int i=1;i<=maxmod;i++){
        ans+=mod[i];
    }
    cout<<ans==0?1:ans<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    freopen("main.in", "r", stdin);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}