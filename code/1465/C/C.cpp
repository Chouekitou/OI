#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 100010
using namespace std;

int t;
int in[maxn][3];
int incount[maxn];

int main(){
	freopen("C.in","r",stdin);
	cin>>t;
	while(t--){
		memset(in,0,sizeof(in));
		memset(incount,0,sizeof(incount));
		int n,m;
		int loop=0,c=0;
		cin>>n>>m;
		int maxi=0;
		for(int i=1;i<=m;i++){
			cin>>in[i][1]>>in[i][2];
			if(in[i][1]==in[i][2]){
				loop+=1;
				incount[i]=-1;
			}
			else incount[in[i][2]]+=1;
			maxi=max(max(maxi,in[i][1]),in[i][2]);
		}
		cout<<maxi<<endl;
		for(int i=1;i<=maxi;i++){
			if(incount[i]==0) c+=1;
		}
		cout<<m-loop+c<<endl;
		cout<<endl;
	}
	return 0;
}
