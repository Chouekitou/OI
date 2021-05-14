#include<iostream>
#include<fstream>
#include<cstring>
#define maxn 100010
#define ull unsigned long long
using namespace std;

int t;
ull presum[maxn];

int main(){
	ios::sync_with_stdio(0);
//	freopen("B.in","r",stdin);
	cin>>t;
	while(t--){
		memset(presum,0,sizeof(presum));
		int n,x;
		int minpos=0;
		int minpow=999999;ull sum=0;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			int ta;
			cin>>ta;
			presum[i]=ta+presum[i-1];
			sum+=ta;
			int count=0;
			while(ta%x==0){
				count+=1;ta/=x;
			}
			if(count<minpow){
				minpow=count;minpos=i;
			}
//			minpow=min(minpow,count);
		}
//		cout<<minpos<<" "<<minpos<<endl;
		cout<<sum*(minpow+1)+presum[minpos-1]<<endl;
//		cout<<endl;
	}
	return 0;
} 
