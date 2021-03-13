#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#define maxn 500010
using namespace std;

int t;
int in[maxn],c[maxn];
int dp[maxn];

int main(){
	ios::sync_with_stdio(0);
	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		memset(in,0,sizeof(in));
		memset(c,0,sizeof(c));
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>in[i];
		}
		for(int i=1;i<n;i++){
			c[i]=min(in[i],in[i+1]);
		}
		for(int i=1;i<=n;i++){
			int m=0;
			for(int j=1;j<i;j++){
				if(c[i]>c[j]){
					m=max(m,dp[j]);
				}
			}
			dp[i]=m+1;
		}
		int m=0;
		for(int i=1;i<=n;i++){
			max(m,dp[i]);
			cout<<dp[i]<<" ";
		}
		cout<<endl;
		cout<<m<<endl;
	}
}
