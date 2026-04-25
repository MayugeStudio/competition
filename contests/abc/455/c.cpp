#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;
using ll = long long;
#define N (ll)(4e5)


int main() {
  ll n, k; cin >> n >> k;
  map<ll, ll> memo;
  for (int i=0; i<n; ++i) {
    ll a; cin >> a;
    memo[a] += a;
  }

  vector<ll> b;
  for (auto v: memo) {
    b.push_back(v.second);
  }

  sort(b.rbegin(), b.rend());
  ll ans = 0;
  for (int i=k; i<b.size(); ++i) {
    ans += b[i];
  }
  cout << ans << endl;

  return 0;
}

