#include <fstream>
#include <iostream>
#include <cmath>
#define maxn 200005
using namespace std;

int in[maxn];
int dp[maxn],mod=1000000007;

void solve(){
    int n,m,count=0;
    cin>>n>>m;
    while(n){
        count+=1;
        in[count]=n%10;
        n/=10;
    }
    int ans=0;
    for(int i=1;i<=count;i++){
        ans+
    }
}

void init(){
    for(int i=0;i<9;i++) dp[i]=2;
    dp[9]=3;
    for(int i=10;i<maxn;i++){
        dp[i]=(dp[i-9]+dp[i-10])%mod;
    }
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    init();
    while(t--){
        solve();
    }
    return 0;
}

