#include <iostream>
#include <fstream>
#define ull unsigned long long
using namespace std;

void solve() {
    ull a, b;
    cin >> a >> b;
    if (b == 1) {
        cout << "NO\n";
        return;
    }
    if (b != 1)
        cout << "YES\n" << a * b - a << " " << a * b << " " << a * b + a * b - a << endl;
    // else
    //     cout << "YES\n" << b * a - b << " " << b * a << " " << b * a + b * a - b << endl;
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