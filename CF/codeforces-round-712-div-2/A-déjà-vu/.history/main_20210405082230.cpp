#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int t;

bool check(string a){
    for(int i=0;i<(a.size()+1)/2;i++){
        if(a[i]!=a[a.size()-i-1]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    for(int i=0;i<=s.size()-1;i++){
        string tt="";
        tt.append(s.substr(0,i+1));
        tt.append("a");
        tt.append(s.substr(i+1,s.size()-i));
        if(!check(tt)){
            cout<<"YES"<<endl<<tt<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

