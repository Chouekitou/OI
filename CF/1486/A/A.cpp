#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#define ull unsigned long long
#define maxn 200
using namespace std;

ull t,n;

void solve(){
	ull sum=0,need=0;
	cin>>n;
	vector<ull> a(n);
	for(auto &i : a) cin>>i;
	for(ull i=0;i<n;i++){
//		ull a;
//		cin>>a;
		sum+=a[i];
		need+=i;
		if(sum<need){
			cout<<"no\n";return;
		}
	}
	cout<<"yes\n";
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
