#include<iostream>
#include<fstream>
#define ull unsigned long long
using namespace std;

int n;
ull ans;

int main(){
	cin>>n;
	ans=1;
	for(int i=n/2+1;i<=n;i++) ans*=i;
	for(int i=1;i<=n/2;i++) ans/=i;
	cout<<ans;
	return 0;
}
