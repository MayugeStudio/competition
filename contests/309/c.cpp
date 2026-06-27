#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;


int main() {
  ll n, k; cin >> n >> k;

  // a days, b amount
  vector<pll> m(n);
  for (int i=0; i<n; ++i) {
    cin >> m[i].first >> m[i].second;
  }

  sort(m.begin(), m.end());
  ll sum = 0;
  for (int i=0; i<n; ++i) { sum += m[i].second; }

  if (sum <= k) {
    cout << 1 << endl;
    return 0;
  }

  for (int i=0; i<n; ++i) {
    sum -= m[i].second;
    if (sum <= k) {
      cout << m[i].first+1 << endl;
      return 0;
    }
  }

  return 0;
}
