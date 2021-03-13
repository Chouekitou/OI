#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
#define maxn 110
using namespace std;

int t,n,a[maxn],root,edgecount;
int fedge[maxn],nedge[maxn],edget[maxn],depth[maxn];

void dfs(int x,int depth_fa){
	depth[x]=depth_fa+1;
	for(int edge=fedge[x];edge;edge=nedge[edge]){
		dfs(edget[edge],depth[x]);
	}
}

void link(int x,int y){
	edgecount+=1;
	edget[edgecount]=y;
	nedge[edgecount]=fedge[x];
	fedge[x]=edgecount;
}

int conn(int l,int r){
	if(l==r) return l; 
	int mpos,mval=0;
	for(int i=l;i<=r;i++){
		if(a[i]>mval){
			mval=a[i];mpos=i;
		}
	}
	if(l<mpos-1)
		link(mpos,conn(l,mpos-1));
	else if(l!=mpos) link(mpos,l);
	if(r>mpos+1)
		link(mpos,conn(mpos+1,r));
	else if(r!=mpos) link(mpos,r);
	return mpos;
}

void solve(){
	edgecount=0;
	memset(fedge,0,sizeof(fedge));
	memset(edget,0,sizeof(edget));
	memset(nedge,0,sizeof(nedge));
	memset(depth,0,sizeof(depth));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	root=conn(1,n);
	dfs(root,-1);
	for(int i=1;i<=n;i++){
		cout<<depth[i]<<" ";
	}
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("D.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
