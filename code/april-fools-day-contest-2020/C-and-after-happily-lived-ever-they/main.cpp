#include <fstream>
#include <iostream>
using namespace std;

int ck[]={0,4,1,3,2,0,5};

int main() {
    ios::sync_with_stdio(0);
    int n;
    int bi[8]={};
    cin>>n;
    if(n&(1)) bi[1]=1;
    if(n&(1<<1)) bi[2]=1;
    if(n&(1<<2)) bi[3]=1;
    if(n&(1<<3)) bi[4]=1;
    if(n&(1<<4)) bi[5]=1;
    if(n&(1<<5)) bi[6]=1;
    int ans=0;
    for(int i=1;i<=6;i++){
        if(bi[i]==1){
            ans+=1<<ck[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

