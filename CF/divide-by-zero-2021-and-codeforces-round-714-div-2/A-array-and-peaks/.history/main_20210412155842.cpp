#include <fstream>
#include <iostream>
using namespace std;

int t;

void pr(int out[200],int n){
    for(int i=1;i<=n;i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;
}

void solve(){
    int n,k;
    cin>>n>>k;
    if(k>=(n+1)/2){
        cout<<-1<<endl;
        return;
    }
    int out[200]={};
    for(int i=1;i<=k;i++){
        out[i*2]=n-k+i;
        // pr(out,n);
    }
    int pos=1;
    for(int i=1;i<=n-k;i++){
        while(out[pos]!=0) pos+=1;
        out[pos]=i;
    }
    pr(out,n);
    // for(int i=1;i<=n;i++){
    //     cout<<out[pos]<<" ";
    // }
    // cout<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

