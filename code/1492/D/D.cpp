#include<iostream>
#include<fstream>
#define maxn 200010
using namespace std;

int a,b,k,n;
int ba[maxn],bb[maxn];

void print(){
	cout<<"Yes"<<endl;
	for(int i=1;i<=n;i++){
		cout<<ba[i];
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<bb[i];
	}
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("D.in","r",stdin);
	cin>>a>>b>>k;
	if(k>=a+b-2){
		cout<<"No"<<endl;
		return 0;
	}
	n=a+b;
	for(int i=1;i<=b;i++){
		ba[i]=1;bb[i]=1;
	}
	if(k==0){
		print();return 0;
	}
//	int count=k;
	bb[b+min(k,a)]=1;bb[b]=0;
	if(k<=a){
		print();return 0;
	}
	int count=0;
	while(count+min(k,a)<k){
		count+=1;
		bb[b-count]=0;
		bb[n-count]=1;
//		count+=1;
	}
	print();
	return 0;
}
