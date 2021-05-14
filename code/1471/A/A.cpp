#include<iostream>
#include<fstream>
#include<vector>
#include<cstring>
#include<map>
#include<cmath>
#define ull unsigned long long
#define maxn 100010
using namespace std;
//typedef unsigned long long ull;

int t;
//ull in[maxn];
//ull rem[maxn];

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
//		memset(in,0,sizeof(in));
//		mp.clear();
		ull sum=0;
		ull maxans=0,minans=0;
		ull n;double x;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			ull tin;
			cin>>tin;
			sum+=tin;
			maxans+=ceil(tin*1.0/x);
		}
		minans=ceil(sum*1.0/x);
		cout<<minans<<" "<<maxans<<endl;
	}
	return 0;
}
