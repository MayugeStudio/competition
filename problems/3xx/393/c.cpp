#include <iostream>
#include <utility>
#include <vector>
#include <set>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;

int main() {
  int n, m; cin >> n >> m;
  ll ans = 0;
  vector<pll> vs(n);
  set<pll> s;
  for (int i=0; i<m; ++i) {
    ll u, v; cin >> u >> v;
    pll p;
    if (u > v) {
      p = make_pair(v, u);
    } else if (u == v) {
      continue;
    } else {
      p = make_pair(u, v);
    }
    s.insert(p);
  }
  cout << m - s.size() << endl;
  return 0;
}
