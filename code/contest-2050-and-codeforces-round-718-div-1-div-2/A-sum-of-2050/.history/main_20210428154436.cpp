#include <fstream>
#include <iostream>
#include <vector>
#define ull unsigned long long
using namespace std;

void solve(){
    ull n;
    cin>>n;
    if(n%2050!=0){
        cout<<-1<<endl;
        return;
    }
    n/=2050;
    ull ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    cout<<ans<<endl;
    return;
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

