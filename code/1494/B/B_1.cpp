#include<iostream>
#include<fstream>
using namespace std;

int t,n,u,r,d,l;

int check(int a,int b,int c,int d){
	if(a-(n-2)>=0) a-=n-2;
	else a=0;
	if(b-(n-2)>=0) b-=n-2;
	else b=0;
	if(a+b>c+d) return 0;
	if(a==2&&(c==0||d==0)) return 0;
	if(b==2&&(c==0||d==0)) return 0;
	if(a==2&&b==2&&(c<2||d<2)) return 0;
	if(a==1&&(c==0&&d==0)) return 0;
	if(b==1&&(c==0&&d==0)) return 0;
	return 1;
}

void solve(){
	cin>>n>>u>>r>>d>>l;
//	int m=n-2;
	if(check(u,d,l,r)&&check(l,r,u,d)){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
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
