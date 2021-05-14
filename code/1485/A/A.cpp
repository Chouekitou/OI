#include<iostream>
#include<fstream>
#include<cmath>
#define inf 0x3F
#define ull unsigned long long
//#define ull double
using namespace std;

ull a,b,t;

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a<b){
			cout<<1<<endl;continue;
		}
		ull minans=inf;
		ull ta=a,tb=b;
//		cout<<minans<<endl;
//		ull tb=b;
		ull count=0;
		for(int i=0;i<=30;i++){
			if(b==1&&i==0) continue;
			count=i;
			b+=i;
//			cout<<count<<endl;
			while(a!=0){
//				a=floor(a*1.0/b);
				a=a/b;
//				cout<<a<<" "<<count<<endl;
				count+=1;
			}
//			if(a==b)
//			cout<<count<<endl;
			minans=min(minans,count);
			a=ta;b=tb;
		}
		cout<<minans<<endl;
//		cout<<endl;
	}
	return 0;
}
