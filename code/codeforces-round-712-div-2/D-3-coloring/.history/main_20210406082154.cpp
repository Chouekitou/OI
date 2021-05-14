#include <fstream>
#include <iostream>
#define maxn 110
using namespace std;

int n,mp[maxn][maxn],color[]={0,1,2,3};

int main() {
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a;
            cin>>a;
            int tc=(a+1)%3+1;
            if(mp[i-1][j]==tc||mp[i][j-1]==tc){
                tc=(tc+1)%3+1;
            }
            mp[i][j]=tc;
            cout<<tc<<" "<<i<<" "<<j<<endl<<endl;
        }        
    }
    cout.flush();
    return 0;
}

