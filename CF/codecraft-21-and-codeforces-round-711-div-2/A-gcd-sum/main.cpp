#include <fstream>
#include <iostream>
#define ll long long
using namespace std;

int t;

ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

bool check(ll n){
    ll tt=n,sum=0;
    while(tt){
        sum+=tt%10;
        tt/=10;
    }
    if(sum%3==0) return true;
    if(gcd(sum,n)>1) return true;
    // if(sum%3==0||(sum%2==0&&n%2==0)) return true;
    return false;
}

void solve(){
    ll n;
    cin>>n;
    for(ll i=0;i<=3;i++){
        if(check(n+i)){
            cout<<n+i<<endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

