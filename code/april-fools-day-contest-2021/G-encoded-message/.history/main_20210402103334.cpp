#include <fstream>
#include <iostream>
#include <map>
using namespace std;

map<int[6],char> mmp;

void init(){
    int chara[]={0,1,0,0,1,0};
    mmp[chara]='a';
    int charb[]={0,1,1,0,2,0};
    mmp[charb]='b';
    int charc[]={0,2,0,0,1,1};
    mmp[charc]='c';
    int chard[]={0,2,1,0,1,2};
    mmp[chard]='d';
    int chare[]={0,1,1,0,1,1};
    mmp[chare]='e';
    int charf[]={0,2,1,0,2,1};
    mmp[charf]='f';
    int charg[]={0,2,2,0,2,2};
    mmp[charg]='g';
    int charh[]={0,1,2,0,2,1};
    mmp[charh]='h';
    int chari[]={0,1,0,0,1,0};
    mmp[chari]='a';
}

int main() {
    ios::sync_with_stdio(0);
    init();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int in[6]={};
        for(int j=1;j<=5;j++){
            cin>>in[j];
        }
        cout<<mmp[in];
    }
    return 0;
}

