#include <cstring>
#include <iostream>
#define ll long long
#define maxn 500010
using namespace std;

ll n, m, a[maxn];

struct seg_tree {
    ll sum, maxa, maxb, second, count;
} tree[maxn * 30];

struct lazytag
{
    ll a,b,a1,b1;
}lazy[maxn];


void push_up(int pos) {
    tree[pos].sum = tree[pos * 2].sum + tree[pos * 2 + 1].sum;
    tree[pos].maxa = max(tree[pos * 2].maxa, tree[pos * 2 + 1].maxa);
    tree[pos].maxb = max(tree[pos * 2].maxb, tree[pos * 2 + 1].maxb);
    if (tree[pos * 2].maxa == tree[pos * 2 + 1]) {
        tree[pos].maxa = tree[pos * 2].maxa;
        tree[pos].count = tree[pos * 2].count + tree[pos * 2 + 1].count;
    } else if (tree[pos * 2].maxa > tree[pos * 2 + 1].maxa) {
        tree[pos].maxa = tree[pos * 2].maxa;
        tree[pos].count = tree[pos * 2].count;
        if (tree[pos * 2].second > tree[pos * 2 + 1].maxa) {
            tree[pos].second = tree[pos * 2].second;
        } else {
            tree[pos].second = tree[pos * 2 + 1].maxa;
        }
    } else {
        tree[pos].maxa = tree[pos * 2 + 1].maxa;
        tree[pos].count = tree[pos * 2 + 1].count;
        if (tree[pos * 2 + 1].second < tree[pos * 2].maxa) {
            tree[pos].second = tree[pos * 2].maxa;
        } else {
            tree[pos].second = tree[pos * 2 + 1].second;
        }
    }
}

void push_down(int pos){

}

void add(int )

void change()

void tomin()

void maxA()

void maxB()

void getsum(ll l,ll r,ll s,ll t,ll p){
    if(l<=s && t<=r) return tree[p].sum;
    ll m=(s+t)/2;
    ll sum=0;
    if(l<=m) sum+=getsum(l,min(m,r),s,t,p);
    if(r>m) sum+=
}

void build(ll l, ll r, ll pos) {
    if (l == r) {
        tree[pos].sum = a[l];
        tree[pos].maxa = a[l];
        tree[pos].maxb = a[l];
        tree[pos].second = -(1e18);
        tree[pos].count = 1;
        return;
    }
    ll mid = (l + r) / 2;
    build(l, mid, pos * 2);
    build(mid + 1, r, pos * 2 + 1);
    push_up(pos);
}



int main() {
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, n, 1);
    // memcpy(treeb, tree, sizeof(treeb));
    for (int i = 1; i <= m; i++) {
        int op, l, r, val;
        cin >> op >> l >> r;
        if (op <= 2)
            cin >> val;
        // TODO: add move
    }
}