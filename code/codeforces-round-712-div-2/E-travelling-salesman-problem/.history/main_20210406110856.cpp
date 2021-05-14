#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 100010
#define ll long long
using namespace std;

struct city{
    ll c,a;
}mp[maxn];

int cmp(city a,city b){
    return a.a>b.a;
}

ll d[maxn];

int main() {
    ios::sync_with_stdio(0);
    ll sum=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>mp[i].a>>mp[i].c;
        sum+=mp[i].c;
    }
    sort(mp+1,mp+1+n,cmp);
    ll mmax=mp[1].a+mp[1].c;
    for(int i=2;i<=n;i++){
        
        // for(int j=1;j<i;j++){
        //     mmax=max(mmax,mp[j].a+mp[j].c);
        // }
        sum+=max(0ll,mp[i].a-mmax);
        mmax=max(mmax,mp[i].a+mp[i].c);
    }
    // if(mp[n].c<mp[1].a-mp[n].a){
    //     sum-=mp[n].c;
    //     sum+=mp[1].a-mp[n].a;
    // }
    // sum+=max(0ll,mp[n].a-mp[1].a-mp[1].c);
    // sum+=mp[n].c+max(0ll,mp[1].a-mp[n].a-mp[n].c);
    // sum+=max(mp[n].c,mp[1].a-mp[n].a);
    cout<<sum<<endl;
    return 0;
}

