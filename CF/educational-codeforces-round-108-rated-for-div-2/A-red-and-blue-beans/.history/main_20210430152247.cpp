#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    double r,b,d;
    cin>>r>>b>>d;
    double pccount=min(r,b);
    if((fabs((r/pccount)-(b-pccount)))>d){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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

