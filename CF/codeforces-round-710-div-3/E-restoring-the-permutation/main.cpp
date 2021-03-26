#include <fstream>
#include <iostream>
#define maxn 200010
using namespace std;

int t,n,q[maxn];

void gen_min(){
    int used[maxn]={};
    int last_used=0;
    for(int i=1;i<=n;i++){
        if(q[i]!=q[i-1]){
            cout<<q[i]<<" ";
            used[q[i]]=1;
        }
        else{
            last_used+=1;
            while(used[last_used]){
                last_used+=1;
            }
            cout<<last_used<<" ";
            used[last_used]=1;
        }
    }
    cout<<endl;
}

void gen_max(){
    int used[maxn]={};
    int l[maxn]={};
    int last_used=0,lc=0;
    for(int i=1;i<=n;i++){
        if(q[i]!=q[i-1]){
            cout<<q[i]<<" ";
            last_used=q[i];
            lc+=1;
            l[lc]=last_used-1;
            used[q[i]]=lc;
        }
        else{
            last_used=l[used[q[i]]];
            // last_used-=1;
            while(used[last_used]){
                last_used=l[used[last_used]];
            }
            cout<<last_used<<" ";
            used[last_used]=lc;
            l[lc]=last_used-1;
        }
    }
    cout<<endl;
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>q[i];
    }
    gen_min();
    gen_max();
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

