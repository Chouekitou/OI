#include<iostream>
#include<fstream>
#include<vector>
#include<cstring>
#include<algorithm>
#define maxn 200010
using namespace std;

int t;

int calc(vector<int> a,vector<int> b){
	int n=a.size();
	int m=b.size();
	vector<int> su(n+1);
	int r=m-1;
	for(int i=n-1;i>=0;i--){
		su[i]=su[i+1];
		while(r>=0&&b[r]>a[i]) --r;
		if(r>=0&&b[r]==a[i]) su[i]++;
	}
	int ans=0;
	int j=0;
	r=0;
	for(int l=0;l<m;l++){
		while(j<n&&a[j]<=b[l]+j) ++j;
        while(r<m&&b[r]-b[l]<j) ++r;
        ans=max(ans,r-l+su[j]);
	}
	return ans;
}

void solve(){
	int n,m;
	vector<int> pos,sp;
	vector<int> pos_n,sp_n;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int tt;cin>>tt;
		if(tt>=0) pos.push_back(tt);
		else pos_n.push_back(-tt);
	}
	for(int i=0;i<m;i++){
		int tt;cin>>tt;
		if(tt>=0) sp.push_back(tt);
		else sp_n.push_back(-tt);
	}
	reverse(sp_n.begin(),sp_n.end());
	reverse(pos_n.begin(),pos_n.end());
	cout<<calc(pos,sp)+calc(pos_n,sp_n)<<endl;
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("C.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
