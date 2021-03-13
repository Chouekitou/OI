#include<iostream>
#include<fstream>
#include<cstring>
#define ull unsigned long long
using namespace std;

ull t;
ull checked[20];

int check(ull l){
//	cout<<l<<endl;
	ull tt=l;
	while(tt){
		if(tt%10!=0)
			if(l%(tt%10l)!=0) return 0;
		tt/=10l;
	}
	return 1;
}

int main(){
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		ull n;
		cin>>n;
//		memset(checked,0,sizeof(checked));
		ull max=(n/2520l+1)*2520l;
		for(ull i=n;i<=max;i++){
			if(check(i)){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
