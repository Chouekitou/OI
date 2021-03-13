#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<set>
#define maxn 100010
using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> in;
		for(int i=1;i<=n;i++){
			int v;
			cin>>v;
			if(in.count(v)) v++;
			in.insert(v);
		}
		cout<<in.size()<<endl;
	}
	return 0;
}
