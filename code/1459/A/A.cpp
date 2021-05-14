#include<bits/stdc++.h>
#define maxn 1010
using namespace std;

int t;
char ri[maxn],bi[maxn];
int r[maxn],b[maxn];

int main(){
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		memset(r,0,sizeof(r));
		memset(b,0,sizeof(b));
		memset(ri,0,sizeof(ri));
		memset(bi,0,sizeof(bi));
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>ri[i];
		for(int i=1;i<=n;i++) cin>>bi[i];
		for(int i=1;i<=n;i++){
			r[i]=ri[i]-'0';
			b[i]=bi[i]-'0';
		}
		int rb=0,bb=0;
		for(int i=1;i<=n;i++){
			if(r[i]>b[i]) rb+=1;
			if(r[i]<b[i]) bb+=1;
		}
//		cout<<rb<<" "<<bb<<endl;
		if(rb>bb) cout<<"RED\n";
		if(rb<bb) cout<<"BLUE\n";
		if(rb==bb) cout<<"EQUAL\n";
	}
	return 0;
}
