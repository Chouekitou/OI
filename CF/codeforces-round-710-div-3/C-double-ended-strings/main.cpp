#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int t;
string a,b;

void solve(){
    int ans=0;
    cin>>a;
    cin>>b;
    for(int len=1;len<=min(a.size(),b.size());len++){
        for(int i=0;i+len<=a.size();i++){
            for(int j=0;j+len<=b.size();j++){
                if(a.substr(i,len)==b.substr(j,len)){
                    ans=max(ans,len);
                }
            }
        }
    }
    cout<<a.size()+b.size()-2*ans<<endl;
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

