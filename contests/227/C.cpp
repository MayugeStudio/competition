#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
  ll n; cin >> n;
  ll ans = 0;
  for (ll a=1; a*a*a<=n; ++a) {
    for (ll b=a; a*b*b<=n; ++b) {
      ans += floor(n/(a*b)) - b + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
