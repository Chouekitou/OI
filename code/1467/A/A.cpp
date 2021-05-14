#include<iostream>
#include<fstream>
#define maxn 200010
using namespace std;

int t;
int arr[]={0,0,1,2,3,4,5,6,7,8,9}; 

void solve(int n){
	if(n<=3){
		if(n==2) cout<<98<<endl;
		if(n==3) cout<<989<<endl;
		return;
	}
	cout<<989;
	n-=3;
	for(int i=1;i<=n/10;i++){
		cout<<"0123456789";
	}
	for(int i=1;i<=n%10;i++){
		cout<<arr[i];
	}
	cout<<endl;
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<9<<endl;
			continue;
		}
		solve(n);
	}
	return 0;
}
