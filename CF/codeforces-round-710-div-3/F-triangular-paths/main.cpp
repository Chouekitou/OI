#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
#define maxn 200010
using namespace std;

int t;

struct point{
    int r,c;
};

int cmp(point a,point b){
    return a.r<b.r;
}

void solve(){
    ll ans=0;
    int n,ri[maxn],ci[maxn];
    vector<point> in;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>ri[i];
    for(int i=1;i<=n;i++) cin>>ci[i];
    point f;
    f.c=1,f.r=1;
    in.push_back(f);
    for(int i=1;i<=n;i++){
        point tt;
        tt.r=ri[i];
        tt.c=ci[i];
        in.push_back(tt);
    }
    sort(in.begin(),in.end(),cmp);
    for(int i=0;i<=n-1;i++){
        point a,b;
        a=in[i];
        b=in[i+1];
        // cout<<a.r<<" "<<a.c<<" "<<b.r<<" "<<b.c<<endl;
        if(b.r-b.c==a.r-a.c){
            if((a.r+a.c)%2==0){
                ans+=b.r-a.r;
            }
            else continue;
        }
        else{
            b.r-=a.r-1;
            b.c-=a.c-1;
            if((a.c+a.r)%2==0){
                ans+=((b.r-b.c)/2);
            }
            else{
                ans+=((b.r-b.c+1)/2);
            }
        }
    }
    cout<<ans<<endl;
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

