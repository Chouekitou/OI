#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#define maxn 300010
using namespace std;

int t,a[maxn],b[maxn];

void solve(){
    vector<int> sposa,sposb;
    int n;
    int suma0=0,suma1=0,sumb0=0,sumb1=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0){
            suma0+=1;
        }
        if(a[i]==1){
            suma1+=1;
        }
        if(suma0==suma1){
            sposa.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
        if(b[i]==0){
            sumb0+=1;
        }
        if(b[i]==1){
            sumb1+=1;
        }
        if(sumb0==sumb1){
            sposb.push_back(i);
        }
    }
    int count=0;
    for(int i=n;i>=1;i--){
        if(a[i]!=b[i]){
            if(count%2==1){
                continue;
            }
            else if(find(sposa.begin(),sposa.end(),i)!=sposa.end()){
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

