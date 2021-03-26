#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#define maxn 100010
#define ll long long
using namespace std;

int n;
ll v,dp[maxn];
// ll t[maxn],p[maxn];
ll maxans=-1,maxpos=0;

struct val{
    int pos,value;
};
vector<val> type1,type2;

int cmp(val a,val b){
    return a.value>b.value;
}

int cmp2(val a,val b){
    return a.value<b.value;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>n>>v;
    val t;
    t.value=999999999999;
    type1.push_back(t);
    type2.push_back(t);
    for(int i=1;i<=n;i++){
        int t,p;
        cin>>t>>p;
        val tt;
        tt.pos=i;
        tt.value=p;
        if(t==1){
            type1.push_back(tt);
        }
        else{
            type2.push_back(tt);
        }
    }
    sort(type1.begin(),type1.end(),cmp);
    sort(type2.begin(),type2.end(),cmp);
    for(int i=0;i<=type1.size();i++){
        ll tans=0;
        for(int j=1;j<=i;j++){
            tans+=type1[i].value;
        }
        for(int j=1;j<=)
    }
    return 0;
}

