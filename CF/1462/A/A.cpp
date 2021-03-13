#include<iostream>
#include<cstring>
#define maxn 500
using namespace std;

int t,n,a[maxn],out[maxn];

int main(){
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(out,0,sizeof(out));
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
//		int front=1,back=n;
		int l=1,r=n;
		while(l<r){
			out[l*2-1]=a[l];
			l++;
			out[2*(n-r+1)]=a[r];
			r--;
		}
		if(n%2==1) out[n]=a[n/2+1];
//		if(l==r) out[l]=a[n];
//		if(l==r) out[l]=a[l];
		for(int i=1;i<=n;i++){
			cout<<out[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
