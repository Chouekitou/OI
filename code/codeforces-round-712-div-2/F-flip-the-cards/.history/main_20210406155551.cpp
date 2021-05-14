#include <fstream>
#include <iostream>
#define maxn 200010
using namespace std;

struct card{
    int a,b;
}c[maxn];

int main() {
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>c[i].a>>c[i].b;
        
        if(c[i].a==c[i].b){
            cout<<-1;
            return 0;
        }
    }

    return 0;
}

