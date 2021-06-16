#include <fstream>
#include <iostream>
#include <cstring>
#define maxn 2010
using namespace std;

int a[maxn];

void solve(){
    memset(a,0,sizeof(a));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        ans += __gcd(a[i], a[j] * 2) > 1;
      }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

