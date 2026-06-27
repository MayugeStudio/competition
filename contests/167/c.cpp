#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
  ll n, m, x; cin >> n >> m >> x;
  vector<ll> c(n);
  vector<vector<ll>> a(n, vector<ll>(m));
  for (int i=0; i<n; ++i) {
    cin >> c[i];
    for (int j=0; j<m; ++j) {
      cin >> a[i][j];
    }
  }

  ll ans = 1e9;
  for (int i=0; i<(1LL<<n); ++i) {
    vector<ll> tb(m, 0);
    ll cost = 0;
    for (int j=0; j<n; ++j) {
      if (i&(1LL<<j)) {
        cost += c[j];
        for (int k=0; k<m; ++k) {
          tb[k] += a[j][k];
        }
      }
    }

    // check
    bool ok = true;
    for (int i=0; i<m; ++i) {
      if (tb[i] < x) {
        ok = false;
      }
    }
    if (ok) ans = min(ans, cost);
  }

  if (ans == 1e9) cout << -1 << endl;
  else cout << ans << endl;

  return 0;
}
