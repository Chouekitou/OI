#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#define maxn 110
using namespace std;

int t;
int a[maxn];

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		int n,d;
		cin>>n>>d;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		if(a[1]+a[2]<=d||a[n]<=d) cout<<"yes\n";
		else cout<<"no\n";
//		int b=0,s=0;
//		for(int i=1;i<=n;i++){
//			if(a[i]<=d) s+=1;
//			else b+=1;
//		}
//		if(s>=2){
//			cout<<"yes\n";
//		}
//		else cout<<"no\n";
	}
	return 0;
}
