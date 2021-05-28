#include <fstream>
#include <iostream>
#define maxn 200
using namespace std;

int n, a[maxn];

void calc() {

}

void solve() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    calc();
    cout << n << endl;
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

