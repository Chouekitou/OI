#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#define maxn 300010
using namespace std;

int t;
int n,m;
int k[maxn],c[maxn];

int cmp(int a,int b){
	return a>b;
}

int main(){
	ios::sync_with_stdio(0);
	freopen("C.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>k[i];
		for(int i=1;i<=m;i++) cin>>c[i];
		sort(k+1,k+1+n,cmp);
		for(int i=1;i<=n;i++) cout<<k[i];
		cout<<endl;
	}
	return 0;
}
