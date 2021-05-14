#include <fstream>
#include <iostream>
#define maxn 2000010
#define ll long long
using namespace std;

int n, m, total;
int a[maxn], b[maxn];

struct seg_tree{
    int lc,rc,dat;
}tree[maxn];

int build(int l,int r){
    int pos=++total;
    if(l == r) tree[pos].dat=a[l];
    int m=(l+r)>>1;
    tree[pos].lc=build(l,m);
    tree[pos].rc=build(m+1,r);
    tree[pos].dat=
}

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
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        solve(a,b,c,d,i-1);
    }
    return 0;
}