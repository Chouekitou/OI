#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 100010
using namespace std;

int n,q,k;
int a[maxn];
int p[maxn];

void solve(int l,int r){
	int ans=0;
	if(l==r){
		cout<<k-1<<endl;return;
	}
	ans=a[l+1]-2+k-a[r-1]-1+p[r-1]-p[l];
	cout<<ans<<endl;
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>n>>q>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		p[i]=a[i+1]-1-(a[i-1]+1)+p[i-1];
	}
	for(int i=1;i<=q;i++){
		int l,r;
		cin>>l>>r;
		solve(l,r);
	}
	return 0;
}
