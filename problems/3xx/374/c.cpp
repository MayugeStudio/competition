#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> k(n);
  for(int i=0; i<n; ++i) cin >> k[i];

  ll ans = 2e9;
  for (ll i=0; i<(1LL<<n); ++i) {
    ll a = 0, b = 0;
    for (int j=0; j<n; ++j) {
      if (i&(1LL<<j)) {
        a += k[j];
      } else {
        b += k[j];
      }
    }

    if (a > b) {
      if (a < ans) ans = a;
    } else {
      if (b < ans) ans = b;
    }
  }
  cout << ans << endl;

  return 0;
}

