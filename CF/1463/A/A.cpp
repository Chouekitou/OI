#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if((a+b+c-3)%7==6) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
