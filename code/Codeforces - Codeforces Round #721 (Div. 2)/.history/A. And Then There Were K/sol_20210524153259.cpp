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
        while (n % 2 == 0) {
            n = n >> 1;
            count += 1;
        }
        cout << (1 << count) - 1 << endl;
    }
    return 0;
}

