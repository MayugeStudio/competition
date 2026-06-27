#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> num(n);

  for (ll a = 1; a <= n; ++a) {
    for (ll b = 1; a * b <= n; ++b) {
      num[a * b]++;
    }
  }

  ll ans = 0;
  for (int v = 1; v < n; ++v) {
    ll ab = num[v];
    ll cd = num[n - v];
    ans += ab * cd;
  }

  cout << ans << endl;

  return 0;
}
