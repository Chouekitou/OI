#include<bits/stdc++.h>
#define maxn 200010
#define ull long long
using namespace std;

int n,m;
ull a[maxn],b[maxn];

ull gcd(ull a,ull b){
//	if(a==0) return 0;
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
//	freopen("C.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
//	ull g=gcdatpos(2,n);
	for(int i=n;i>=2;i--) a[i]=abs(a[i]-a[1]);
	ull g=a[2];
	for(int i=3;i<=n;i++){
		g=gcd(g,a[i]);
	}
//	cout<<g<<endl;
	for(int i=1;i<=m;i++){
		cout<<gcd(a[1]+b[i],g)<<" ";
	}
	return 0;
} 
