#include <fstream>
#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <queue>
#define maxn 200010
using namespace std;

// map<int,int> mmp;
int t,n,total,mcount[maxn];

void solve(){
    map<int,int> mmp;
    // mmp.clear();
    // memset(mcount,0,sizeof(mcount));
    priority_queue<pair<int,int> > q;
    cin>>n;
    for(int i=1;i<=n;i++){
        int ti;
        cin>>ti;
        mmp[ti]++;
    }
    // int a,b;
    for(pair<int,int> a : mmp){
        pair<int,int> b;
        b.first=a.second;
        b.second=a.first;
        q.push(b);
    }
    // for(auto a : q){
    //     cout<<a.first<<" "<<a.second<<endl;
    // }
    int size=n;
    while(q.size()>=2){
        pair<int,int> a,b;
        a=q.top();
        q.pop();
        b=q.top();
        q.pop();
        a.first-=1;
        b.first-=1;
        size-=2;
        if(a.first) q.push(a);
        if(b.first) q.push(b);
    }
    cout<<size<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

