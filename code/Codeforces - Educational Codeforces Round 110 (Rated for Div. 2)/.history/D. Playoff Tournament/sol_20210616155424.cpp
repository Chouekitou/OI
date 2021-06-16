#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int k, q;
string s;

void init() {

}

void update(int p, char c) {

}

int main() {
    ios::sync_with_stdio(0);
    cin >> k;
    cin >> s;
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
