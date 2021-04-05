#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    int check[20]={};
    bool ok=true;
    while(n){
        if(check[n%m]){
            ok=false;
            break;
        }
        else check[n%m]=1;
        n/=m;
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}

