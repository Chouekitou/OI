#include <fstream>
#include <iostream>
#define ll long long
#define maxn 100010
using namespace std;

int n, q;
int l[maxn];

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> q;
    for (int i = 1;i <= n;i++) {
        char c;
        cin >> c;
        l[i] = l[i - 1] + int(c - 'a' + 1);
    }
    for (int i = 1;i <= q;i++) {
        int l
    }
    return 0;
}

