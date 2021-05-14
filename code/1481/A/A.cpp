#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		string in;
		int px,py;
		int cx=0,cy=0,ncx=0,ncy=0;
		cin>>px>>py;
		cin>>in;
		for(unsigned int i=0;i<in.length();i++){
			if(in[i]=='U') cy+=1;
			if(in[i]=='R') cx+=1;
			if(in[i]=='D') ncy+=1;
			if(in[i]=='L') ncx+=1;
		}
		bool ok=true;
		if(px>0&&cx<px) ok=false;
		if(px<0&&ncx<(-px)) ok=false;
		if(py>0&&cy<py) ok=false;
		if(py<0&&ncy<(-py)) ok=false;
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
