#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> h;
  vector<ll> l;
  for (int i=0; i<n; ++i) {
    cin >> h[i] >> l[i];
  }

  vector<ll> d(n);
  d[n-1] = h[n-1];

  for (int i=n-1; i>=0; i--) {
    d[i] = max(d[i+1], h[i]);
  }


  ll q; cin >> q;
  ll max = 0;
  while (q--) {
    ll t; cin >> t;
    int li = upper_bound(l.begin(), l.end(), t) - l.begin();
    cout << d[li] << '\n';
  }

  return 0;
}
