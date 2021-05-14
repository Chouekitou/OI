#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t>=10){
        int tt=0;
        while(t){
            tt+=t%10;
            t/=10;
        }
        t=tt;
    }
    cout<<t<<endl;
    return 0;
}

