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
    // sum+=max(0ll,mp[n].a-mp[1].a-mp[1].c);
    sum+=max(0ll,mp[1].a-mp[n].a-mp[n].c);
    cout<<sum<<endl;
    return 0;
}

