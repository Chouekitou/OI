#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int t;

void solve(){
    string s;
    cin>>s;
    int pos=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            pos=i;
            break;
        )
    }
    if(!pos){
        cout<<"NO"<<endl;
        return;
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

