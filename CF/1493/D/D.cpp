#include<iostream>
#include<fstream>
#include<map>
#include<set>
#include<cstring>
#define maxn 200010
using namespace std;

int n,q,a[maxn];
bool isprime[maxn];
map<int, map<int,int> > mmap;
map<int,int,int> mincount;

void init(){
	for(int i=2;i<maxn;i++) isprime[i]=1;
	for(int i=2;i<maxn;i++){
		if(isprime[i]){
			for(int j=i*2;j<maxn;j+=i) isprime[j]=0;
		}
	}
	return;
}

void calc(int a){
//	map<int,int> tmap;
//	int pos=maxn-1;
//	while(a!=1){ 
//		for(;isprime[pos];pos--){
//			while(a%pos){
//				if(tmap.find(pos)!=tmap.end()) tmap[pos]+=1;
//				else tmap[pos]=1;
//			}
//		}
//	}
//	for(map<int,int>::iterator i=tmap.begin();i!=tmap.end();i++){
//		if(mincount.find(i->first)==mincount.end()) mincount[i->first]=i->second;
//		else mincount[i->first]=min(mincount[i->first],i->second);
//	}
//	mmap[a]=tmap;
}

int main(){
	ios::sync_with_stdio(0);
	freopen("D.in","r",stdin);
	init();
//	for(int i=1;i<maxn;i++){
//		if(isprime[i]) cout<<i<<" ";
//	}
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		calc(a[i]);
	}
	
}
