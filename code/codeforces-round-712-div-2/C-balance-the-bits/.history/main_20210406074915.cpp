#include <fstream>
#include <iostream>
#define maxn 200010
using namespace std;

void solve(){
    int n,sum0=0,sum1=0,s[maxn]={};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        if(s[i]) sum1+=1;
        else sum0+=1;
    }
    if(s[1]==0||s[n]==0){
        cout<<"NO\n";
        return;
    }
    if(sum0%2==1){
        cout<<"NO\n";
        return;
    }
    
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

