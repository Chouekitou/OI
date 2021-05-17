#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << (k / gcd(k, 100 - k)) +
            ((100 - k) / gcd(k, 100 - k)) << endl;
    }
    return 0;
}