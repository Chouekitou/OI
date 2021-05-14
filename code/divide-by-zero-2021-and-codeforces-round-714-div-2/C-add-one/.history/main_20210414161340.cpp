#include <fstream>
#include <iostream>
#include <cmath>
#define maxn 1000000010
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
        ans+=
    }
}

void init(){
    
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

