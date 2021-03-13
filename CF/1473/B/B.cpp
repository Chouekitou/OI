#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#define ull unsigned long long
#define maxn 30
using namespace std;

int q;
string s,t;
char out[maxn];

ull gcd(ull a,ull b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void print(ull a){
	memset(out,0,sizeof(out));
	int pos=1;
	while(a){
		out[pos]=a%2;
		a>>=1;
	}
	for(int i=pos;i>0;i--){
		if(out[i]==0) cout<<'b';
		else cout<<'a';
	}
	cout<<endl;
	return;
}

int main(){
	ios::sync_with_stdio(0);
	freopen("B.in","r",stdin);
	cin>>q;
	while(q--){
//		memset(s,0,sizeof(s));
//		memset(t,0,sizeof(t));
		ull a=0,b=0;
		cin>>s>>t;
		for(int i=0;i<s.length();i++){
			a*=2;
			if(s[i]=='a') a+=1;
		}
		for(int i=0;i<t.length();i++){
			b*=2;
			if(s[i]=='a') b+=1;
		}
		ull g=gcd(a,b);
		if(g==1){
			cout<<-1<<endl;continue;
		}
		ull ans=a*b/g;
		print(ans);
	}
	return 0;
}
