#include <fstream>
#include <iostream>
#include <algorithm>
#define ll long long
#define maxn 100010
using namespace std;

int n;
ll ans, bought;
struct item {
    int a, b;
}shop[maxn];

int cmp(item a, item b) {
    return a.b < b.b;
}

int main() {
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> shop[i].a >> shop[i].b;
    }
    sort(shop + 1, shop + 1 + n, cmp);
    int l = 1, r = n;
    while (l < r) {
        if (bought >= shop[r].b) {
            ans += shop[r].a;
            bought += shop[r].a;
        }
        else if (bought + shop[r].a > shop[r].b) {
            ans += (shop[r].b - bought) * 2;
            // shop[l].a -= shop[l].b - bought;
            ans += (shop[r].a - (shop[r].b - bought));
            bought += shop[r].a;
        }
        else {
            ans += shop[r].a * 2;
            bought += shop[r].a;
        }
        // bought += shop[r].a;
        // ans += shop[r].a * 2;
        r -= 1;
        if (bought >= shop[l].b) {
            ans += shop[l].a;
            bought += shop[l].a;
        }
        else if (bought + shop[l].a > shop[l].b) {
            ans += (shop[l].b - bought) * 2;
            // shop[l].a -= shop[l].b - bought;
            ans += (shop[l].a - (shop[l].b - bought));
            bought += shop[l].a;
        }
        else {
            ans += shop[l].a * 2;
            bought += shop[l].a;
        }
        l += 1;
    }
    cout << ans << endl;
    return 0;
}

