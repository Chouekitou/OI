#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
        if(n%i==0){
            cout<<i<<n/i<<endl;
            return 0;
        }
    }
    return 0;
}

