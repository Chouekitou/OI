#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0;i < 30;i++) {
            if (n >> i & 1 == 1) {

            }
        }
        cout << (1 << count) - 1 << endl;
    }
    return 0;
}

