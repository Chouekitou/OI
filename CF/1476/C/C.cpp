#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
#define maxn 100010
#define ll long long
using namespace std;

int t,n;
ll a[maxn],b[maxn],c[maxn];
ll logs[maxn],dp[maxn];

ll max(ll a,ll b,ll c){
	return max(a,max(b,c));
}

ll solve(){
	a[n+1]=1,b[n+1]=c[n];
	ll ans=0;
	logs[1]=abs(a[2]-b[2]);
	for(int i=2;i<=n;i++){
		if(a[i]==b[i]){
			logs[i]=min(a[i+1],b[i+1])-1+(c[i]-max(a[i+1],b[i+1]))+2;
			continue;
		}
//		if(a[i+1]!=b[i+1])
			logs[i]=logs[i-1]+(min(a[i+1],b[i+1])-1)
				+(c[i]-max(a[i+1],b[i+1]))+2;
//		else logs[i]=logs[i-1]+2;
	}
	for(int i=2;i<=n;i++){
		dp[i]=max(logs[i]+(ll)abs(a[i+1]-b[i+1]),dp[i-1]);
		ans=max(dp[i],ans);
	}
//	for(int i=1;i<=n;i++){
//		cout<<dp[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=1;i<=n;i++){
//		cout<<logs[i]<<" ";
//	}
//	cout<<endl;
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("C.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(dp,0,sizeof(dp));
		memset(logs,0,sizeof(logs));
		for(int i=1;i<=n;i++) cin>>c[i];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		cout<<solve()<<endl;
	}
	return 0;
}
