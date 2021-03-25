#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int mx1,my1,mx2,my2;
string in;

int main() {
    ios::sync_with_stdio(0);
    cin>>in;
    mx1=in[0]-'a'+1;
    my1=in[1]-'0';
    cin>>in;
    mx2=in[0]-'a'+1;
    my2=in[1]-'0';
    cout<<max(abs(mx1-mx2),abs(my1-my2))<<endl;
    while(1){
        if(mx1==mx2&&my1==my2) break;
        if(mx1>mx2){
            cout<<'L';
            mx1-=1;
        }
        else if(mx1<mx2){
            cout<<'R';
            mx1+=1;
        }
        if(my1<my2){
            cout<<'U';
            my1+=1;
        }
        else if(my1>my2){
            cout<<'D';
            my1-=1;
        }
        cout<<endl;
    }
    return 0;
}

