#include<iostream>
#include<fstream>
using namespace std;

int t,n,k;

void solve(){
	cin>>n>>k;
    cout<<n-k+k/2<<'\n';
	for(int i=k+1;i<=n;++i) cout<<i<<" ";
    for(int i=(k+1)/2;i<k;++i) cout<<i<< " ";
    cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
