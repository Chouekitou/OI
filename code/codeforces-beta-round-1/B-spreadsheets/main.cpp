#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int n;

void dec_to_alpha(int a){
    string out="";
    int arr[100000];
    int count=0;
    while(a){
        count+=1;
        if(a%26!=0){
            arr[count]=a%26;
            a/=26;
        }
        else{
            arr[count]=26;
            a=a/26-1;
        }
    }
    for(int i=count;i>=1;i--){
        if(arr[i]==0) out.push_back('Z');
        else out.push_back(char('A'+arr[i]-1));
    }
    cout<<out;
}

void alpha_to_dec(string a){
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans*=26;
        ans+=a[i]-'A'+1;
    }
    cout<<ans;
}

void check_rc(string ip,int pos2){
    int p1=0,p2=0;
    for(int i=1;i<pos2;i++){
        p1*=10;
        p1+=ip[i]-'0';
    }
    for(int i=pos2+1;i<ip.size();i++){
        p2*=10;p2+=ip[i]-'0';
    }
    dec_to_alpha(p2);
    cout<<p1<<endl;
    return;
}

void check(string ip,int pos1){
    int a1=0;
    for(int i=0;i<pos1;i++){
        a1*=26;
        a1+=ip[i]-'A'+1;
    }
    cout<<"R";
    for(int i=pos1;i<ip.size();i++) cout<<ip[i];
    cout<<"C"<<a1<<endl;
    return;
}

void solve(){
    string ip;
    cin>>ip;
    int pos1=-1,pos2=-1;
    for(int i=0;i<ip.size();i++){
        if(ip[i]<='9'&&ip[i]>='0'&&pos1==-1){
            pos1=i;
        }
        if(pos1!=-1){
            if(ip[i]>='A'&&ip[i]<='Z'){
                pos2=i;break;
            }
        }
    }
    if(pos2!=-1){
        check_rc(ip,pos2);
    }
    else{
        check(ip,pos1);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    // freopen("main.in", "r", stdin);
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}