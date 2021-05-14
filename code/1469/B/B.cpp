#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 120
using namespace std;

int t;
int inn[maxn],inm[maxn],out[maxn];

int main(){
	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		memset(inn,0,sizeof(inn));
		memset(inm,0,sizeof(inm));
		memset(out,0,sizeof(out));
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>inn[i];
		}
		for(int i=1;i<=m;i++){
			cin>>inm[i];
		}
		for(int i=1,j=1,pos=1;i<=n||j<=m;){
			cout<<i<<" "<<j<<endl;
			if(inn[i]&&inm[j]&&i<=n&&j<=m)
				if(inn[i]>inm[j]){
					out[pos]=inn[i];
					i++,pos++;
				}
				else{
					out[pos]=inm[j];
					j++,pos++;
				}
			else{
				if(inn[i]){
					out[pos]=inn[i];
					i++;pos++;
				}
				else if(inm[j]){
					out[pos]=inm[j];
					j++;pos++;
				}
			}
		}
		for(int i=1;i<=n+m;i++){
			cout<<out[i]<<" ";
		}
		cout<<endl;
		int ans=0;
		for(int i=1;i<=n+m;i++){
			out[i]+=out[i-1];
			ans=max(out[i],ans);
		}
		cout<<ans<<endl;
		cout<<endl;
	}
	return 0;
}
