#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    string in;
    bool check=true;
    cin>>in;
    for(int i=2;i<in.size();i++){
        if((in[i-2]-'A'+in[i-1]-'A')%26+'A'!=in[i])}{
            check=false;
            break;
        }
    }
    if(check){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}

