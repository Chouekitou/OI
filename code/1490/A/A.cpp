#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
#define maxn 100
using namespace std;

double t,a[maxn];

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i!=1){
				double ma=max(a[i],a[i-1]);
				double mb=min(a[i],a[i-1]);
				while(mb*2<ma){
					ans+=1;
					mb*=2;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
