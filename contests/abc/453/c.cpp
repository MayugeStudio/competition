#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int sign(ll x) {
  if (x > 0) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  ll n; cin >> n;
  vector<ll> l(n);
  for (int i=0; i<n; ++i) {
    cin >> l[i];
    l[i] *= 2;
  }
  ll best = 0;
  for (ll i=0; i<(1LL<<n); ++i) {
    ll pos = 1;
    ll cur = 0;
    for (ll j=0; j<n; ++j) {
      ll npos = pos;
      if (i&(1L<<j)) {
        npos += l[j];
      } else {
        npos -= l[j];
      }
      if (sign(pos)*sign(npos) < 0) {cur++;};
      pos = npos;
    }
    if (cur > best) best = cur;
  }

  cout << best << endl;

  return 0;
}
