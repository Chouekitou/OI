#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#define maxn 30010
using namespace std;

int t,a[maxn],c[3];

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		memset(c,0,sizeof(c));
		int n,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			c[a[i]%3]+=1;
		}
		while(*min_element(c,c+3)!=n/3){
			for(int i=0;i<=2;i++){
				if(c[i]>n/3){
					ans+=1;
					c[i]-=1;
					c[(i+1)%3]+=1;
				}
			} 
		}
		cout<<ans<<endl;
	}
	return 0;
}
