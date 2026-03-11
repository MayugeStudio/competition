#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  // value, index
  vector<pair<ll, ll>> a(n);
  for (ll i=0; i<n; ++i) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end());

  for (ll query=0; query<q; ++query) {
    ll k; cin >> k;
    set<ll> b;
    for (ll i=0; i<k; ++i) {
      ll t; cin >> t;
      t--; b.insert(t);
    }
    for (ll i=0; i<n; ++i) {
      if (b.count(a[i].second)) continue;
      cout << a[i].first << endl;
      break;
    }
  }


  return 0;
}
