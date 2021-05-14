#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int t,n,k;

int main(){
//	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(k%n==0){
			cout<<k/n<<endl;
		}
		else if(k<n){
			int count=0;
//			while(k*count<n) count+=1;
			if(n%k==0) count=n/k;
			else count=n/k+1;
//			cout<<count<<endl;
			if(count*k%n==0) cout<<(k*count/n)<<endl;
			else cout<<1+ceil(k*count/n)<<endl;
		}
		else{
			int ans=1+(ceil(k/n));
			printf("%d\n",ans);
//			cout<<1+(ceil(k/n))<<endl;
		}
	}
	return 0;
}
