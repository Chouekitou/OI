#include <iostream>
#include <fstream>
#include <cmath>
#define ll long long
using namespace std;

ll n,m,a;

int main(){
    ios::sync_with_stdio(0);
    // freopen("main.in", "r", stdin);
    cin>>n>>m>>a;
    if(n%a) n=n/a+1;
    else n/=a;
    if(m%a) m=m/a+1;
    else m/=a;
    cout<<n*m;
    return 0;
}