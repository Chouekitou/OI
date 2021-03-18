#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <cmath>
#define maxn 110
using namespace std;

int t,n,a[maxn],b[maxn],mtm[maxn];

// 💖 Hi, thanks for using ICIE! 💖
// 🔧 To use a custom code template, press Ctrl+Shift+P and select "ICIE Template configure" from the list 🔧
// 📝 If you spot any bugs or miss any features, create an issue at https://github.com/pustaczek/icie/issues 📝

void solve(){
    int ans=0,c_time=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    for(int i=1;i<=n;i++) cin>>mtm[i];
    c_time += a[1] + mtm[1];
    if(n==1){
        cout<<c_time<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        c_time=max((int)ceil((b[i] - a[i])/2), b[i])+mtm[i];

    }
    cout<<c_time<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    cin>>t;
    while(t--) solve();
    return 0;
}