#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        while (n % 2 != 0) {
            n >> 1;
            count += 1;
        }
        cout << (1 << count) << endl;
    }
    return 0;
}

