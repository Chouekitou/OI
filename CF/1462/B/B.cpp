#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
#define maxn 300
using namespace std;

int t,n;
int s[maxn];
//int check[]={0,2,0,2,0};
char l;
string c;
int main(){
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
//		cout<<t<<endl;
//		memset(s,0,sizeof(s));
		cin>>n;
//		cout<<n<<endl;
		cin>>c;
		bool check=false;
//		cout<<c<<endl;
//		bool c=false;
//		if(c[0]=='2') cout<<"check"<<endl;
//		int pos=0;
//		int checkpos=1;
//		for(int i=1;i<=n;i++) cin>>s[i];
//		cin>>l;
//		for(int i=1;i<=n;i++) cout<<s[i];
//		cout<<endl;
		if(c[0]=='2'&&c[1]=='0'&&c[2]=='2'&&c[3]=='0') check=true;
		if(c[0]=='2'&&c[1]=='0'&&c[2]=='2'&&c[n-1]=='0') check=true;
		if(c[0]=='2'&&c[1]=='0'&&c[n-2]=='2'&&c[n-1]=='0') check=true;
		if(c[0]=='2'&&c[n-3]=='0'&&c[n-2]=='2'&&c[n-1]=='0') check=true;
		if(c[n-4]=='2'&&c[n-3]=='0'&&c[n-2]=='2'&&c[n-1]=='0') check=true;
		if(check){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
