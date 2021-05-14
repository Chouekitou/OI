#include <fstream>
#include <iostream>
#define ll long long
using namespace std;

int t;

void solve(){
    ll n,m,x;
    cin>>n>>m>>x;
    ll posx,posy;
    posx=x/n;
    posy=x%n;
    if(x%n==0){
        posx-=1;
        posy+=n;
    }
    cout<<(posy-1)*m+posx+1<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

