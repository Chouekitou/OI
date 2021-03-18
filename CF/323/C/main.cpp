#include <fstream>
#include <iostream>
#define maxn 1000010
using namespace std;

int n, m;
int p[maxn], q[maxn];



int f(int z,int x){
    return ((z-1+x)%n)+1;
}

void solve(int a,int b,int c,int d,int x){
    int l1=min(f(a,x),f(b,x));
    int r1=max(f(a,x),f(b,x));
    int l2=min(f(c,x),f(d,x));
    int r2=max(f(c,x),f(d,x));

}

int main() {
    ios::sync_with_stdio(0);
    freopen("main.in", "r", stdin);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> q[i];
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        solve(a,b,c,d,i-1);
    }
    return 0;
}