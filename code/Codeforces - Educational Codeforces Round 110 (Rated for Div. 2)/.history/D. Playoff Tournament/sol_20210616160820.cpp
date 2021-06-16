#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstring>
#define maxn 1000000
using namespace std;

int k, q;
string s;
int mcount[maxn];

void update() {

}

void init() {
    for (int i = (1 << k) - 1;i > 0;i--) {
        mcount[i] = mcount[i * 2] * mcount[i * 2 + 1]
    }
}

void update(int p, char c) {

}

int main() {
    ios::sync_with_stdio(0);
    cin >> k;
    cin >> s;
    reverse(s.begin(), s.end());
    init();
    cin >> q;
    for (int i = 1;i <= q;i++) {
        int p;
        char c;
        cin >> p >> c;
        s[p] = c;
        update(p, c);
    }
    return 0;
}
