#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define maxn 300010
using namespace std;

int t;

void solve(){
    // vector<int> sposa,sposb;
    int n;
    int suma0=0,suma1=0,sumb0=0,sumb1=0;
    int a[maxn],b[maxn],sposa[maxn]={};
    memset(sposa,0,sizeof(sposa));
    cin>>n;
    for(int i=1;i<=n;i++){
        // cin>>a[i];
        char c;
        cin>>c;
        a[i]=c-'0';
        if(a[i]==0){
            suma0+=1;
        }
        else if(a[i]==1){
            suma1+=1;
        }
        if(suma0==suma1){
            sposa[i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        // cin>>b[i];
        char c;
        cin>>c;
        b[i]=c-'0';
        // if(b[i]==0){
        //     sumb0+=1;
        // }
        // if(b[i]==1){
        //     sumb1+=1;
        // }
        // if(sumb0==sumb1){
        //     sposb.push_back(i);
        // }
    }
    int count=0;
    for(int i=n;i>=1;i--){
        // cout<<i<<" ";
        if(a[i]!=b[i]){
            if(count%2==1){
                continue;
            }
            else if(sposa[i]==1){
                count+=1;
                continue;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        else if(a[i]==b[i]&&count%2==1){
            if(sposa[i]==1){
                count+=1;
                continue;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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

