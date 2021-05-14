#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<algorithm>
#define maxn 200010
#define ull unsigned long long
using namespace std;

int n,k;
vector<int> a;

bool check(int x){
	vector<int> check=a;
	for(int i=0;i<check.size();i++){
		if(check[i]<x) check[i]=-1;
		if(check[i]>=x) check[i]=1;
	}
	for(int i=1;i<check.size();i++){
		check[i]+=check[i-1];
	}
	int mx=check[k-1];
	int mn=0;
	for(int i=k;i<n;i++){
		mn=min(mn,check[i-k]);
		mx=max(mx,check[i]-mn);
	}
	if(mx>0){
		return true;
	}
	else return false;
}

void solve(){
//	vector<int> a;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int ta;
		cin>>ta;
		a.push_back(ta);
//		cin>>a[i];
	}
	int l=1,r=n+1;
	while(r-l>1){
		int m=(l+r)/2;
		vector<int> b(n);
        for(int i=0;i<n;i++)
            if(a[i]>=m){
                b[i]=1;
            }else{
                b[i]=-1;
            }
        for(int i=1;i<n;++i) b[i]+=b[i-1];
        int mx=b[k-1];
        int mn=0;
        for(int i=k;i<n;++i){
            mn=min(mn,b[i-k]);
            mx=max(mx,b[i]-mn);
        }
        if(mx>0) {
            l=m;
    	}
        else{
            r=m;
        }
	}
	cout<<l<<endl;
//	vector<int> search;
////	memcpy(search,a,sizeof(a));
//	search=a;
//	sort(search.begin(),search.end());
//	int l=0,r=search.size()-1;
//	int mid=floor((l+r)/2.0);
//	while(r-l>1){
//		bool tf=check(mid);
//		if(tf){
//			l=mid;
//		}
//		else r=mid;
//		mid=floor((l+r)/2.0);
//	}
//	cout<<l<<" "<<r<<endl;
//	cout<<check[r];
}

int main(){
	ios::sync_with_stdio(0);
	freopen("D_.in","r",stdin);
	solve();
	return 0;
} 
