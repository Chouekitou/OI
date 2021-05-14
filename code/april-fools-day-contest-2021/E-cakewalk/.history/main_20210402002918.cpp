#include <fstream>
#include <iostream>
using namespace std;

int h,w;

int m[10][10];

int main() {
    ios::sync_with_stdio(0);
    cin>>h>>w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            char c;
            cin>>c;
            if(c=='*') m[i][j]=1;
        }
    }
    int posx=1,posy=1,ans=0;
    while(posx!=h&&posy!=w){
        if(m[posx][posy+1]){
            ans+=1;
            posy+=1;
        }
        else if(m[posx+1][posy]){
            posx+=1;
            ans+=1;
        }
        else if(posy+1<=w){
            posy+=1;
        }
        else posx+=1;
    }
    cout<<ans;
    return 0;
}

