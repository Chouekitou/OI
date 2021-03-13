#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<map>
#define maxn 200010
using namespace std;

int t,n;
int a[maxn];
map<int,int> mp;

int main(){
//	freopen("E1.in","r",stdin);
	cin>>t;
	while(t--){
		int ans=0;
		memset(a,0,sizeof(a));
		mp.clear();
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i++){
			if(!mp.count(a[i])){
				mp[a[i]]=1;
			}
			else mp[a[i]]+=1;
		}
		for(int i=1;i<=n;i++){
			if(mp[i]>=3){
				ans+=mp[i]*(mp[i]-1)*(mp[i]-2)/6;
			}
			if(mp.count(i+1)>=2){
				ans+=(mp[i]*(mp[i]-1)*mp[i+1]/2+mp[i]*mp[i+1]*(mp[i+1]-1))/2;
			}
			else if(mp.count(mp[i+1])==1){
				ans+=mp[i]*(mp[i-1])/2;
			}
			if(mp.count(i+2)>=2){
				ans+=mp[i]*mp[i+1]*mp[i+2]/6+mp[i]*(mp[i]-1)*mp[i+2]/2+mp[i]*mp[i+2]*(mp[i+2]-1)/2;
				if(mp.count(i+1)){
					ans+=mp[i]*mp[i+1]*mp[i+2];
				}
			}
			else if(mp.count(i+2)==1){
				ans+=(mp[i]*(mp[i]-1));
				if(mp.count(i+1))
					ans+=mp[i]*mp[i+1];
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
