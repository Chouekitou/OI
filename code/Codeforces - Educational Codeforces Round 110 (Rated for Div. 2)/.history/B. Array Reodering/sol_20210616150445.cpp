#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 2010
using namespace std;

int a[maxn];

void solve(){
    memset(a,0,sizeof(a));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
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

