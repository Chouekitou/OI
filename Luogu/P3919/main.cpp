#include <iostream>
#include <fstream>
#include <vector>
#define maxn 2000010
#define ll long long
using namespace std;

ll n,m,total;
ll a[maxn];
vector<ll> version_root;

struct seg_tree{
    ll lc,rc,dat;
}tree[30*maxn];

ll build(ll l,ll r){
    ll pos=++total;
    if(l == r){
        tree[pos].dat = a[l];
        return pos;
    }
    ll mid = (l + r) / 2;
    tree[pos].lc = build(l, mid);
    tree[pos].rc = build(mid + 1, r);
    tree[pos].dat = tree[tree[pos].lc].dat + tree[tree[pos].rc].dat;
    return pos;
}

ll get(ll pos, ll l, ll r, ll x){
    ll ans = 0;
    if(l == r) return tree[pos].dat;
    ll mid = (l + r) / 2;
    if(x <= mid) ans = get(tree[pos].lc, l, mid, x);
    else if(x > mid) ans = get(tree[pos].rc, mid + 1, r, x);
    return ans;
}

ll change(ll now, ll l, ll r, ll x, ll val){
    ll p = ++total;
    tree[p] = tree[now];
    if(l == r){
        tree[p].dat = val;
        return p;
    }
    ll mid = (l + r) / 2;
    if(x <= mid)
        tree[p].lc = change(tree[now].lc,l,mid,x,val);
    else
        tree[p].rc = change(tree[now].rc, mid + 1, r, x, val);
    tree[p].dat = tree[tree[p].lc].dat + tree[tree[p].rc].dat;
    return p;
}

int main(){
    ios::sync_with_stdio(0);
    // freopen("./main.in","r",stdin);
    cin>>n>>m;
    for(ll i=1;i<=n;i++) cin>>a[i];
    version_root.push_back(build(1,n));
    for(ll i=1;i<=m;i++){
        ll vi,op,loc;
        cin>>vi>>op>>loc;
        if(op==1){
            ll val;
            cin>>val;
            version_root.push_back(change(version_root[vi], 1, n, loc, val));
        }
        if(op==2){
            cout<<get(version_root[vi], 1, n, loc)<<endl;
            version_root.push_back(version_root[vi]);
        }
    } 
    return 0;
}