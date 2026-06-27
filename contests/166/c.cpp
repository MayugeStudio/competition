#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  vector<ll> h(n);
  for (int i=0; i<n; ++i) cin >> h[i];

  vector<vector<ll>> g(n);
  for (int i=0; i<m; ++i) {
    ll a, b; cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<ll> visited(n);

  ll ans = 0;
  for (int i=0; i<n; ++i) {
    bool ok = true;
    for (int j=0; j<g[i].size(); j++) {
      ll x = g[i][j];
      if (h[i] <= h[x]) ok = false;
    }
    if (ok) ans++;
  }

  cout << ans << endl;

  return 0;
}
