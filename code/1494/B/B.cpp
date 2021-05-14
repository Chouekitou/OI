#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 110
using namespace std;

int t,n,u,r,d,l;
bool g[maxn][maxn];

bool check(int a,int b,int c,int d){
	memset(g,0,sizeof(g));
	if(a==n){
		g[1][1]=g[1][n]=1;
	}
	if(a==n-1){
		if(d<b) g[1][n]=1;
		else g[1][1]=1;
	}
	if(d==n){
		g[n][1]=g[n][n]=1;
	}
	if(d==n-1){
		if(d<b) g[n][n]=1;
		else g[n][1]=1;
	}
	int lc=g[1][1]+g[n][1];
	int rc=g[n][n]+g[1][n];
	if(lc>l||rc>r){
		return false;
	}
	else return true;
}

void solve(){
//	memset(g,0,sizeof(g));
	cin>>n>>u>>r>>d>>l;
	if(u==n-1&&r==n-1&&d==n-1&&l==n-1){
		cout<<"YES\n";
		return;
	}
	if(check(u,r,d,l)&&check(r,u,l,d)){
		cout<<"YES\n";
		return;
	}
	cout<<"NO\n";
	return;
//	if(u==n){
//		g[1][1]=g[1][n]=1;
//	}
//	if(u==n-1){
//		if(l<r) g[1][n]=1;
//		else g[1][1]=1;
//	}
//	if(d==n){
//		g[n][1]=g[n][n]=1;
//	}
//	if(d==n-1){
//		if(l<r) g[n][n]=1;
//		else g[n][1]=1;
//	}
//	int lc=g[1][1]+g[n][1];
//	int rc=g[n][n]+g[1][n];
//	if(lc>l||rc>r){
//		cout<<"NO\n";
//	}
//	else cout<<"YES\n";
	return;
}

int main(){
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
