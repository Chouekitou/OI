#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#define maxn 110
using namespace std;

int n,mp[maxn][maxn],color[]={0,1,2,3};

int main() {
    ios::sync_with_stdio(0);
    cin>>n;
    vector<pair<int,int> > black,white;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i%2==1&&j%2==0)||(i%2==0&&j%2==1)){
                black.push_back(pair(i,j));
            }
            else{
                white.push_back(pair(i,j));
            }
        }
    }
    for(int i=1;i<=n*n;i++){

    }
    cout.flush();
    return 0;
}

