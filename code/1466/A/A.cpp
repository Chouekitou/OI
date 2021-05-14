#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 60
using namespace std;

int t;
int pos[maxn];
int lenable[2000];

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		memset(lenable,0,sizeof(lenable));
		memset(pos,0,sizeof(pos));
		for(int i=1;i<=n;i++){
			cin>>pos[i];
		}
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(lenable[pos[j]-pos[i]]==0){
					lenable[pos[j]-pos[i]]=1;
					ans+=1;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
