#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<stack>
#define bTrue 1;
#define bFalse 0
#define maxn 100
using namespace std;

int t,n,an[maxn];

bool check(string str){
	stack<unsigned char> stackBucket; // define a stack
    unsigned char chTop = ' ';  // store stack top value

    for (auto & ch : str) // traverse input string
    {
        if (stackBucket.empty() && ch == ')') // when stack empty and the next char is ')', the string bracket isn't valid!
        {
            return bFalse;
        }
        else //another case
        {
            if (!stackBucket.empty()) // stack top value must be exist.
            {
                chTop = stackBucket.top();
                if (chTop != '(') // stack must store '('
                {
                    return bFalse;
                }
            }

            if (chTop == '(' && ch == ')') // compare the char with stack top value
            {
                stackBucket.pop();
                chTop = ' '; // clear chTop, not save pre value.
            }
            else
            {
                stackBucket.push(ch);
            }
        }
    }

    if (stackBucket.empty()) // empty stack mean bracket is valid
    {
        return bTrue;
    }
    else
    {
        return bFalse;
    }
}

//bool IsBracketValid(const string & str)
//{
//    
//}

string gen(int a,int b,int c){
//	cout<<a<<b<<c;
//	cout<<n<<endl;
	string s="";
	for(int i=0;i<n;i++){
		if(an[i+1]==1){
			if(a==1) s.push_back('(');
			if(a==2) s.push_back(')');
		}
		if(an[i+1]==2){
			if(b==1) s.push_back('(');
			if(b==2) s.push_back(')');
		}
		if(an[i+1]==3){
			if(c==1) s.push_back('(');
			if(c==2) s.push_back(')');
		}
	}
//	cout<<s<<endl;
	return s;
}

void solve(){
//	int A=0,B=0,C=0;
	string a;
	cin>>a;
	n=a.length();
//	for(int i=0;i<a.length();i++){
//		if(a[i]=='A') A+=1;
//		if(a[i]=='B') B+=1;
//		if(a[i]=='C') C+=1;;
//	}
//	if(A+B==C||A+C==B||B+C==A){
//		cout<<"YES\n";
//	}
//	else cout<<"NO\n";
	for(int i=0;i<a.length();i++){
		if(a[i]=='A') an[i+1]=1;
		if(a[i]=='B') an[i+1]=2;
		if(a[i]=='C') an[i+1]=3;
	}
	string b;
	bool ok=false;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=2;j++){
			for(int k=1;k<=2;k++){
				if(check(gen(i,j,k))){
					ok=true;
					cout<<"YES\n";
					return;
				}
			}
		}
	}
	cout<<"NO\n";
	return;
}

int main(){
	ios::sync_with_stdio(0);
//	freopen("A.in","r",stdin);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
