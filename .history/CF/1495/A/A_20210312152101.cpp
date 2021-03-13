#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#define ull unsigned long long
#define maxn 100010
using namespace std;

int t,n;
double sum;
vector<ull> x,y;

void solve(){
	sum=0;
	x.clear();y.clear();
	cin>>n;
	for(int i=1;i<=2*n;i++){
		int tx,ty;
		cin>>tx>>ty;
		if(tx==0) y.push_back(abs(ty));
		if(ty==0) x.push_back(abs(tx));
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	for(int i=0;i<n;i++){
		sum+=sqrt(x[i]*x[i]+y[i]*y[i]);
	}
//	cout<<sum<<endl;
	printf("%.15f\n",sum);
	return;
}

int main(){
//	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--) solve();
	return 0;
}
