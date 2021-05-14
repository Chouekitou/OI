#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<vector>
#define maxn 100010
using namespace std;

int t,n,pos,p[maxn],mymap[maxn],mmax[maxn];


//int max(int l,int r){
//	int maxpos=0,max=-1;
//	for(int i=l;i<=r;i++){
//		if(p[i]>max){
//			maxpos=i;max=p[i];
//		}
//	}
//	return maxpos;
//}

void solve(){
	vector<int> p1;
//	p1.clear();
//	pos=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		mymap[p[i]]=i;
		mmax[i]=mmax[i-1];
		if(p[i]>mmax[i]) mmax[i]=p[i];
	}

//	int max=0;
//	for(int i=n;i>=1;i--){
//		for(int l=i;l>=1;l--){
//			if(p[l]>max){
//				max=p[l];
//				for(int j=i;j>=l;j--){
//					pos+=1;
//					p1[pos]=p[j];
//				}
//				i=l-1;
//				break;
//			}
//		}
//	}
	int r=n;
	while(r>0){
//		int m=mymap[*max_element(p+1,p+1+r)];
		int m=mymap[mmax[r]];
		for(int i=m;i<=r;i++){
			p1.push_back(p[i]);
//			pos+=1;
//			p1[pos]=p[i];
		}
		r=m-1;
//		cout<<r<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<p1[i]<<" ";
	}
	cout<<endl;
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
