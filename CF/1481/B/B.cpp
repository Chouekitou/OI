#include<iostream>
#include<cstdio>
#include<cstring>
#define maxn 150
using namespace std;

int t,n,k;
int h[maxn];

int calc(){
	int pos=1;
	for(;pos<=n;pos++){
		if(h[pos]<h[pos+1]) break;
	}
	if(pos==n+1) return -1;
	else return pos;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		bool over=false;int ans=0;
		cin>>n>>k;
		memset(h,0,sizeof(h));
		for(int i=1;i<=n;i++) cin>>h[i];
		int count=0;
		while(!over){
			count+=1;
			int p=calc();
			if(p==-1){
				over=true;break;
			}
			h[p]+=1;
			if(count==k){
				ans=p;
//				cout<<"c=k\n";
			}
		}
		if(ans==0&&count<=k) ans=-1;
		cout<<ans<<endl;
	}
	return 0;
}
