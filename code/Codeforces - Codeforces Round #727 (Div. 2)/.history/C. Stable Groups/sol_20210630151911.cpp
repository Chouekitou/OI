#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 200010
#define ll long long
using namespace std;

ll n, k, x;
ll a[maxn];
ll gaps;

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> k >> x;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1;i < n;i++) {
        if (a[i + 1] - a[i] > )
    }
    return 0;
}

