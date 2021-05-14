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
                pair<int,int> t(i,j);
                black.push_back(t);
            }
            else{
                pair<int,int> t(i,j);
                white.push_back(t);
            }
        }
    }
    for(int i=1;i<=n*n;i++){
        int a;
        cin>>a;
        if(a==1){
            if(!black.empty()){
                pair<int,int> t=black.back();
                black.pop_back();
                cout<<2<<" "<<t.first<<" "<<t.second<<endl;
            }
            else{
                
            }
        }
        else if(a==2){

        }
        else if(a==3){

        }
    }
    cout.flush();
    return 0;
}

