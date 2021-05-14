#include<iostream>
#include<fstream>
#define ull unsigned long long
using namespace std;

ull t,p,a,b,c;

ull min(ull x,ull y,ull z){
	return min(x,min(y,z));
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>p>>a>>b>>c;
		ull ta,tb,tc;
		if(p%a) ta=a-(p%a);
		else{
			cout<<0<<endl;continue;
		}
		if(p%b) tb=b-(p%b);
		else{
			cout<<0<<endl;continue;
		}
		if(p%c) tc=c-(p%c);
		else{
			cout<<0<<endl;continue;
		}
		cout<<min(ta,tb,tc)<<endl;
	}
	return 0;
}
