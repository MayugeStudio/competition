#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <map>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> xs(n);

  vector<ll> pp(n);
  vector<ll> ps(n+1);
  ps[0] = 0;
  for (int i=0; i<n; ++i) cin >> xs[i];
  for (int i=0; i<n; ++i) {
    cin >> pp[i];
  }
  for (int i=0; i<n; ++i) {
    ps[i+1] = ps[i] + pp[i];
  }

  ll q; cin >> q;

  for (int i=0; i<q; ++i) {
    ll l, r; cin >> l >> r;
    auto lb = lower_bound(xs.begin(), xs.end(), l);
    auto ub = upper_bound(xs.begin(), xs.end(), r);
    ll cnt = ub - lb;
    if (cnt == 0) {
      cout << 0 << endl;
      continue;
    }

    ll start_idx = lb - xs.begin();

    ll sum = ps[start_idx+cnt] - ps[start_idx];
    // cout << ps[cnt] << "-" << ps[start_idx] << "=" << endl;
    cout << sum << endl;
  }
  return 0;
}
