#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#define maxn 150
using namespace std;

//char in[maxn];
string in;
int t;

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>in;
		if(in.length()%2==1){
			cout<<"NO"<<endl;
			continue;
		}
		if(in[0]==')'||in[in.length()-1]=='('){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
	}
	return 0;
}
