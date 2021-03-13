#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int t,n;

int main(){
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		string s;int ts;
		cin>>ts>>s;
		int count=0;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]!=')') break;
			count+=1;
		}
		if(count>s.length()-count){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
