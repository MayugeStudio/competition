#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  ll a, b, c; cin >> a >> b >> c;

  ll ans = 10000;
  for (ll x=0; x<10000; ++x) {
    for (ll y=0; y<10000; ++y) {
      ll tmp = x*a + y*b;
      if ((n-tmp)%c != 0 || tmp > n) {
        continue;
      }
      ll z = (n - tmp)/c;
      if (ans > x+y+z) {
        ans = x+y+z;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
