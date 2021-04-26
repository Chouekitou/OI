#include <fstream>
#include <iostream>
#define maxn 200
using namespace std;

int t;
int arr[maxn];

void pr(int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int pos=1;
    while(k){
        while(arr[pos]-1<0){
            pos+=1;
            if(pos>n){
                pr(n);
                return;
            }
        }
        arr[pos]-=1;
        arr[n]+=1;
        k-=1;
    }
    pr(n);
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

