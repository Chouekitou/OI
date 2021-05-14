#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
#include<vector>
#define ll long long 
#define maxn 300010
using namespace std;

ll n1,n2,n3,s1,s2,s3;
ll a1[maxn],a2[maxn],a3[maxn];

ll getsub(){
	ll t1,t2,t3,t4,t5,t6;
	t1=t2=t3=t4=t5=t6=1000000001;
	if(a1[1]!=0) t1=a1[1];
	if(a1[2]!=0) t2=a1[2];
	if(a2[1]!=0) t3=a2[1];
	if(a2[2]!=0) t4=a2[2];
	if(a3[1]!=0) t5=a3[1];
	if(a3[2]!=0) t6=a3[2];
	vector<ll> temp;
//	cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5<<" "<<t6<<endl;
	if(t1!=0&&t1!=1000000001) temp.push_back(t1);
	if(t2!=0&&t2!=1000000001) temp.push_back(t2);
	if(t3!=0&&t3!=1000000001) temp.push_back(t3);
	if(t4!=0&&t4!=1000000001) temp.push_back(t4);
	if(t5!=0&&t5!=1000000001) temp.push_back(t5);
	if(t6!=0&&t6!=1000000001) temp.push_back(t6);
	sort(temp.begin(),temp.end());
//	cout<<temp.size()<<endl;
//	for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
//	cout<<endl;
	return 2*(temp[0]+temp[1]);
}

int main(){
//	freopen("C2.in","r",stdin);
	cin>>n1>>n2>>n3;
	for(int i=1;i<=n1;i++){
		cin>>a1[i];s1+=a1[i];
	}
	for(int i=1;i<=n2;i++){
		cin>>a2[i];s2+=a2[i];
	}
	for(int i=1;i<=n3;i++){
		cin>>a3[i];s3+=a3[i];
	}
	sort(a1+1,a1+1+n1);
	sort(a2+1,a2+1+n2);
	sort(a3+1,a3+1+n3);
//	for(int i=1;i<=n3;i++) cout<<a3[i]<<" ";
//	cout<<endl;
	ll sub=getsub();
	ll sum=s1+s2+s3;
//	cout<<sub<<endl;
	cout<<sum-sub;
	return 0;
}
