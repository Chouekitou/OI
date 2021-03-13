#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int t;
int x;
int n[11]={0,1,2,3,4,5,6,7,8,9};

int main(){
//	freopen("C1.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>x;
		if(x>45){
			cout<<-1<<endl;
			continue;
		}
		long long ans=0;
		int pos=9;int power=0;
		while(x){
			for(int i=pos;i>0;i--){
				if(x>=n[i]){
					x-=n[i];
					ans+=n[i]*pow(10,power);
					power+=1;
					pos=i-1;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 
