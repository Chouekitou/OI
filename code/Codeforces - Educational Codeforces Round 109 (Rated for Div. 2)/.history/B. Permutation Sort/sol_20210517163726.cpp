#include <fstream>
#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 100
using namespace std;

int a[maxn];
int n1[maxn], n2[maxn];

bool check(int l, int r) {
    for (int i = l + 1;i <= r;i++) {
        if (a[i] != a[i - 1] + 1) return false;
    }
    return true;
}

int check1(int n) {
    //checkn1
    sort(n1 + 1 + 1, n1 + n + 1);
    bool ck = true;
    for (int i = 2;i <= n;i++) {
        if (n1[i] != n1[i - 1] + 1) ck = false;
    }
    if (ck) return 1;
    sort(n1 + 1, n1 + n);
    ck = true;
    for (int i = 2;i <= n;i++) {
        if (n1[i] != n1[i - 1] + 1) ck = false;
    }
    if (ck) return 2;
    return 3;
}

int check2(int n) {
    //checkn2
    sort(n2 + 1, n2 + n);
    bool ck = true;
    for (int i = 2;i <= n;i++) {
        if (n2[i] != n2[i - 1] + 1) ck = false;
    }
    if (ck) return 1;
    sort(n2 + 1 + 1, n2 + n + 1);
    ck = true;
    for (int i = 2;i <= n;i++) {
        if (n2[i] != n2[i - 1] + 1) ck = false;
    }
    if (ck) return 2;
    return 3;
}

void solve() {
    int n;
    cin >> n;
    int pos1, pos2;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        if (a[i] == 1) {
            pos1 = i;
        }
        if (a[i] == n) {
            pos2 = i;
        }
    }
    if (check(1, n)) {
        cout << 0 << endl;
        return;
    }
    if (a[1] == 1 || a[n] == n) {
        cout << 1 << endl;
        return;
    }

    int ans1 = 0, ans2 = 0;
    memcpy(n1, a, sizeof(n1));
    memcpy(n2, a, sizeof(n2));

    ans1 = check1(n);
    ans2 = check2(n);
    cout << ans1 << " " << ans2 << endl;
    cout << min(ans1, ans2) << endl;

    return;
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

