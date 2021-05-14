#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int t;
string n;

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n.length();i++){
			if(i%2==1){
				if(n[i-1]=='a') n[i-1]='b';
				else n[i-1]='a';
			}
			else{
				if(n[i-1]=='z') n[i-1]='y';
				else n[i-1]='z';
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
