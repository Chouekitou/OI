#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#define maxn 1010
using namespace std;

int t,n,m;
int map[maxn][maxn];

int main(){
	ios::sync_with_stdio(0);
//	freopen("D.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(map,0,sizeof(map));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				char tc;
				cin>>tc;
				if(tc=='a') map[i][j]=1;
				if(tc=='b') map[i][j]=2;
				if(tc=='*') map[i][j]=-1;
			}
		}
		if(m==1){
			cout<<"YES\n1 2\n";
			continue;
		}
		bool loop=false;int loopx,loopy;
		for(int i=1;i<=n&&!loop;i++){
			for(int j=1;j<=n&&!loop;j++){
				if(map[i][j]==map[j][i]&&i!=j){
					loop=true;loopx=i,loopy=j;break;break;
				}
			}
		}
		if(loop){
			cout<<"YES\n";
			for(int i=1;i<=m+1;i++){
				if(i%2==1) cout<<loopx<<" ";
				else cout<<loopy<<" ";
			}
			cout<<"\n";
			continue;
		}
		if(m%2==1){
			cout<<"YES\n";
			for(int i=1;i<=m+1;i++){
				if(i%2==1) cout<<1<<" ";
				else cout<<2<<" ";
			}
			cout<<"\n";
			continue;
		}
		if(m%2==0){
			bool check=false;
			if((m/2)%2==1){
				int px=0,py=0,pz=0;
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						for(int k=1;k<=n;k++){
							if(map[i][j]==map[j][k]&&i!=j&&j!=k&&i!=k){
								px=i,py=j,pz=k;check=true;
								break;break;break;
							}
						}
					}
				}
				if(!check){
					cout<<"NO\n";continue;
				}
				cout<<"YES\n";
				for(int i=1;i<=m+1;i++){
					if(i%4==1) cout<<px<<" ";
					if(i%4==2) cout<<py<<" ";
					if(i%4==3) cout<<pz<<" ";
					if(i%4==0) cout<<py<<" ";
				}
				cout<<"\n";
			}
			if((m/2)%2==0){
				int px=0,py=0,pz=0;
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						for(int k=1;k<=n;k++){
							if(map[i][j]==map[j][k]&&i!=j&&j!=k&&i!=k){
								px=i,py=j,pz=k;check=true;
								break;break;break;
							}
						}
					}
				}
				if(!check){
					cout<<"NO\n";continue;
				}
				cout<<"YES\n";
				for(int i=1;i<=m+1;i++){
					if(i%4==1) cout<<py<<" ";
					if(i%4==2) cout<<pz<<" ";
					if(i%4==3) cout<<py<<" ";
					if(i%4==0) cout<<px<<" ";
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
