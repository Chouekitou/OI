#include <fstream>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int t,k,n;
string s;

void solve(){
    cin>>n>>k;
    cin>>s;
    ll fpos=s.find_first_of('*');
    ll lpos=s.find_last_of('*');
    int count=1;
    int i=fpos;
    while(1){
        int j=min(i+k,n-1);
        for(;i<j&&s[j]=='.';j--);
        if(i==j)break;
        count+=1;
        i=j;
    }
    // for(int i=fpos;i<lpos;i++){
    //     int pos;
    //     for(int j=min(i+k,n-1);j>i;j--){
    //         if(s[j]=='*'){
    //             pos=j;
    //             break;
    //         }
    //     }
    //     i=pos;
    //     count+=1;
    // }
    cout<<count<<endl;
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

