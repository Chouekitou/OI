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
    return a.a<b.a;
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
        sum+=max(0ll,mp[i].a-mmax);
        mmax=max(mmax,mp[i].a+mp[i].c);
    }
    cout<<sum<<endl;
    return 0;
}

