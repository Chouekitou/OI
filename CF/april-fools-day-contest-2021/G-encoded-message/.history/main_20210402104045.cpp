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
    int chari[]={0,1,1,0,1,1};
    mmp[chari]='i';
    int charj[]={0,1,2,0,1,2};
    mmp[charj]='j';
    int chark[]={0,1,0,1,2,0};
    mmp[chark]='k';
    int charl[]={0,1,1,1,3,0};
    mmp[charl]='l';
    int charm[]={0,2,0,1,2,1};
    mmp[charm]='m';
    int charn[]={0,2,1,1,2,2};
    mmp[charn]='n';
    int charo[]={0,1,1,1,2,1};
    mmp[charo]='o';
    int charp[]={0,2,1,1,3,1};
    mmp[charp]='p';
    int charq[]={0,2,2,1,3,2};
    mmp[charq]='q';
    int charr[]={0,1,2,1,3,1};
    mmp[charr]='r';
    int chars[]={0,1,1,1,2,1};
    mmp[chars]='s';
    int chart[]={0,1,2,1,2,2};
    mmp[chart]='t';
    int charu[]={0,1,0,2,2,1};
    mmp[charu]='u';
    int charv[]={0,1,1,2,3,1};
    mmp[charv]='v';
    int charw[]={0,1,2,1,1,3};
    mmp[charw]='w';
    int charx[]={0,2,0,2,2,2};
    mmp[charx]='x';
    int chary[]={0,2,1,2,2,3};
    mmp[chary]='y';
    int charz[]={0,1,1,2,2,2};
    mmp[charz]='z';
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

