#include <fstream>
#include <iostream>
#define maxn 200010
using namespace std;

void solve(){
    int n,s[maxn]={};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    if(s[1]==0||s[n]==0){
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

