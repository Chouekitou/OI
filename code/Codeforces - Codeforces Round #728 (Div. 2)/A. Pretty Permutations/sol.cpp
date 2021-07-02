#include <fstream>
#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1;i <= n;i++) {
            if (i % 2 == 1) {
                cout << i + 1 << " ";
            }
            else cout << i - 1 << " ";
        }
        cout << endl;
    }
    else {
        for (int i = 1;i <= n - 3;i++) {
            if (i % 2 == 1) {
                cout << i + 1 << " ";
            }
            else cout << i - 1 << " ";
        }
        cout << n << " " << n - 2 << " " << n - 1 << endl;
    }
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

