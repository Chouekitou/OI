#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#define maxn 250
#include<string>
using namespace std;

bool cmp(char a, char b) {
	return a < b;
}

string a;
//string a,b;
int t;
//char a[maxn],b[maxn];
int tpos[maxn],rpos[maxn];

void swap_str(int x,int y){
	char t=a[x];
	a[x]=a[y];
	a[y]=t;
}

void work(int t){
	int tcount=0,rcount=0;
	int mint=0x3f3f,minr=0x3f3f;
	for(int i=1;i<=t;i++){
		if(a[i]=='t'){
			tcount+=1;
			tpos[tcount]=i;
			mint=min(mint,i);
		}
	}
	for(int i=1;i<=t;i++){
		if(a[i]=='r'){
			rcount+=1;
			rpos[rcount]=i;
			minr=min(minr,i);
		}
	}
	if(mint>minr) return;
	
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	for(int i=1;i<=t;i++){
		int tlen;
		cin>>tlen;
		cin>>a;
//		for(int i=1;i<=tlen;i++){
//			cin>>a[i];
//		}
//		work(tlen);
		sort(a.begin(), a.end(), cmp);
		cout<<a<<endl;
//		for(int i=1;i<=tlen;i++){
//			cout<<a[i];
//		}
//		cout>>endl;
	}
	return 0;
}
