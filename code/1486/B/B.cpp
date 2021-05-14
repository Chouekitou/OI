#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#define maxn 2000
#define ull unsigned long long
using namespace std;

int t,n;

ull solve(vector<int> x){
	sort(x.begin(),x.end());
	return x[x.size()/2]-x[(x.size()-1)/2]+1;
}

void solve(){
	cin>>n;
	vector<int> x(n),y(n);
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	cout<<solve(x)*solve(y)<<endl;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
