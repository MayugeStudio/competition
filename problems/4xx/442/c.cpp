#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  vector<vector<ll>> cnt(n);

  for (int i=0; i<m; ++i) {
    ll a, b; cin >> a >> b;
    a--, b--;
    cnt[a].push_back(b);
    cnt[b].push_back(a);
  }

  for (int i=0; i<n; ++i) {
    ll d = n - cnt[i].size() - 1;
    if (d < 3) {
      cout << "0" << " ";
    } else {
      ll a = 1;
      for (ll j=d; j>d-3; --j) a *= j;
      cout << a/6 << " ";
    }
  }

  return 0;
}
