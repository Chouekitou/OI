#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#define maxn 200010
using namespace std;

int t,n,m_de;
int f[maxn],a[maxn],depth[maxn];
vector<int> s[maxn],d[maxn];

void link(int x,int y){
	f[y]=x;
	s[x].push_back(y);
}

void dfs(int x){
	if(s[x]==0) return;
	depth[x]=depth[f[x]]+1;
	m_de=max(m_de,depth[x]);
	for(int i=0;i<s[x].size();i++){
		dfs(s[x][i]);
	}
}

int main(){
	ios::sync_with_stdio(0);
	freopen("E.in","r",stdin);
	cin>>t;
	while(t--){
		d.clear();
		s.clear();
		memset(depth,0,sizeof(depth));
		memset(f,0,sizeof(f));
		memset(a,0,sizeof(a));
		cin>>n;
		for(int i=2;i<=n;i++){
			int ti;
			cin>>ti;
			link(ti,i);
		}
		for(int i=2;i<=n;i++){
			cin>>a[i];
		}
		depth(1)=1;
		dfs(1);
		for(int i=1;i<=n;i++){
			d[depth[i]].push_back(i);
		}
		
	}
}
