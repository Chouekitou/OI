#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 110
using namespace std;

int t,h,m;
bool valid[maxn][maxn];
int rev[]={0,1,5,-1,-1,2,-1,-1,8,-1};

void calc(){
	memset(valid,1,sizeof(valid));
	for(int i=0;i<=10;i++){
		if(rev[i]==-1){
			for(int j=0;j<10;j++){
				for(int k=0;k<=100;k++){
					valid[10*i+j][k]=0;
					valid[i+10*j][k]=0;
					valid[k][10*i+j]=0;
					valid[k][i+10*j]=0;
				}
//				memset(valid[10*i+j],0,sizeof(valid[10*i+j]));
//				memset(valid[i+10*j],0,sizeof(valid[i+10*j]));
			}
//			memset(valid[i],0,sizeof(valid[i]));
//			for(int j=0;j<=100;j++) valid[j][i]=0;
		}
	}
}

int cmp(int tth,int ttm,int th,int tm){
	if(tth>th) return 1;
	if(th>tth) return 0;
	if(ttm>=tm) return 1;
	return 0;
}

int check(int tth,int ttm,int th,int tm){
	int revh=10*rev[(tth%10)]+rev[tth/10];
	int revm=10*rev[(ttm%10)]+rev[ttm/10];
	if(revh>=tm||revm>=th) return 0;
	return 1;
}

void solve(){
	int th,tm,ansh,ansm;
	char in[10];
	cin>>h>>m;
	cin>>in;
	th=(in[0]-'0')*10+in[1]-'0';
	tm=(in[3]-'0')*10+in[4]-'0';
//	cout<<th<<" "<<tm<<endl;;
//	int ah=0,am=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<m;j++){
			if(valid[i][j]&&cmp(i,j,th,tm)&&check(i,j,h,m)){
				ansh=i,ansm=j;
				if(ansh<10) cout<<"0";
				cout<<ansh<<":";
				if(ansm<10) cout<<"0";
				cout<<ansm<<endl;
				return;
			}
		}
	}
	cout<<"00:00\n";
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	calc();
//	cout<<valid[50][0]<<endl;
//	solve();
	while(t--) solve();
	return 0;
}
