#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int t;

void solve(){
    string s;
    cin>>s;
    int pos=-1;
    for(int i=0;i<s.size();i++){
        if(s[s.size()-i-1]!='a'){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"NO"<<endl;
        return;
    }
    // cout<<pos<<endl;
    cout<<"YES"<<endl;
    for(int i=0;i<pos;i++){
        cout<<s[i];
    }
    cout<<'a';
    for(int i=pos;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

