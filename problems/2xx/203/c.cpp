#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

using ll = long long;
using pll = pair<long long, long long>;

ll n, k;
vector<pll> h;

ll solve() {
  ll ans = 0;
  ll yen = k;

  for (int i=0; i<n; ++i) {
    ll d = h[i].first - ans;
    if (d > yen) return ans + yen;

    yen -= h[i].first - ans;

    ans = h[i].first;
    yen += h[i].second;
  }
  return ans + yen;
}

int main() {
  cin >> n >> k;
  h.resize(n);

  for (ll i=0; i<n; ++i) cin >> h[i].first >> h[i].second;
  sort(h.begin(), h.end());

  cout << solve() << endl;

  return 0;
}

