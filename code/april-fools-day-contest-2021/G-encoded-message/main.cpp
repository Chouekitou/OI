#include <fstream>
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

map<int,char> mmp;

int getsum(int a[]){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=a[i]*pow(4,i);
    }
    return sum;
}

void init(){
    int chara[]={0,1,0,0,1,0};
    mmp[getsum(chara)]='a';
    int charb[]={0,1,1,0,2,0};
    mmp[getsum(charb)]='b';
    int charc[]={0,2,0,0,1,1};
    mmp[getsum(charc)]='c';
    int chard[]={0,2,1,0,1,2};
    mmp[getsum(chard)]='d';
    int chare[]={0,1,1,0,1,1};
    mmp[getsum(chare)]='e';
    int charf[]={0,2,1,0,2,1};
    mmp[getsum(charf)]='f';
    int charg[]={0,2,2,0,2,2};
    mmp[getsum(charg)]='g';
    int charh[]={0,1,2,0,2,1};
    mmp[getsum(charh)]='h';
    // int chari[]={0,1,1,0,1,1};
    // mmp[getsum(chari)]='i';
    int charj[]={0,1,2,0,1,2};
    mmp[getsum(charj)]='j';
    int chark[]={0,1,0,1,2,0};
    mmp[getsum(chark)]='k';
    int charl[]={0,1,1,1,3,0};
    mmp[getsum(charl)]='l';
    int charm[]={0,2,0,1,2,1};
    mmp[getsum(charm)]='m';
    int charn[]={0,2,1,1,2,2};
    mmp[getsum(charn)]='n';
    int charo[]={0,1,1,1,2,1};
    mmp[getsum(charo)]='o';
    int charp[]={0,2,1,1,3,1};
    mmp[getsum(charp)]='p';
    int charq[]={0,2,2,1,3,2};
    mmp[getsum(charq)]='q';
    int charr[]={0,1,2,1,3,1};
    mmp[getsum(charr)]='r';
    // int chars[]={0,1,1,1,2,1};
    // mmp[getsum(chars)]='s';
    int chart[]={0,1,2,1,2,2};
    mmp[getsum(chart)]='t';
    int charu[]={0,1,0,2,2,1};
    mmp[getsum(charu)]='u';
    int charv[]={0,1,1,2,3,1};
    mmp[getsum(charv)]='v';
    int charw[]={0,1,2,1,1,3};
    mmp[getsum(charw)]='w';
    int charx[]={0,2,0,2,2,2};
    mmp[getsum(charx)]='x';
    int chary[]={0,2,1,2,2,3};
    mmp[getsum(chary)]='y';
    int charz[]={0,1,1,2,2,2};
    mmp[getsum(charz)]='z';
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
        cout<<mmp[getsum(in)];
    }
    return 0;
}

