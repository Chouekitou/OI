#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 300010
using namespace std;

int t,n;
int in[maxn],is[maxn];

int isHill(int i){
	return (i>1&&i<=n-1&&in[i]>in[i-1]&&in[i]>in[i+1]);
}

int isValley(int i){
	return (i>1&&i<=n-1&&in[i]<in[i-1]&&in[i]<in[i+1]);
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		int sum=0;
		cin>>n;
		memset(is,0,sizeof(is));
		memset(in,0,sizeof(in));
		for(int i=1;i<=n;i++){
			cin>>in[i];
		}
		for(int i=2;i<=n-1;i++){
			if(isHill(i)||isValley(i)){
				sum+=1;is[i]=1;
			} 
		}
//		cout<<sum<<endl;
		int ans=sum;
		for(int i=2;i<=n-1;i++){
			int temp=in[i];
			in[i]=in[i-1];
			ans=min(ans,sum-is[i-1]-is[i]-is[i+1]+isHill(i-1)+isValley(i-1)
				+isHill(i+1)+isValley(i+1));
			in[i]=in[i+1];
			ans=min(ans,sum-is[i-1]-is[i]-is[i+1]+isHill(i-1)+isValley(i-1)
				+isHill(i+1)+isValley(i+1));
			in[i]=temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}
