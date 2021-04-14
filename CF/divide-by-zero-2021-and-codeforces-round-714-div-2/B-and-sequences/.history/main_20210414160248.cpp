#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n,mod=1e9+7;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min1=*min_element(a.begin(),a.end());
    int count=0;

    for(int x:a){
        if(min1==x) count+=1;
        if((min1&x)!=min1){
            cout<<0<<endl;
            return;
        }
    } 

    int fact=1;
    for(int i=1;i<=n-2;i++){
        fact=(1LL*fact*i)%mod;
    }
    int ans=(1LL*count*(count-1))%mod;
    ans=(1LL*ans*fact)%mod;
    cout<<ans<<endl;
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

