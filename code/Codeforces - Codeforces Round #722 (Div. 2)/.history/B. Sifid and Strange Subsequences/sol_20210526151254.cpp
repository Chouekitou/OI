#include <fstream>
#include <iostream>
#include <algorithm>
#define maxn 100010
using namespace std;

int n, a[maxn], mindiff[maxn];

void solve() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    // if (a[1] > 0)
    int count = 1;
    for (int i = 2;i <= n;i++) {
        mindiff[i] = min(mindiff[i - 1], abs(a[i] - a[i - 1]));
        if (mindiff[i] < a[i]) break;
        count += 1;
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

