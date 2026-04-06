#include <iostream>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  string s, t; cin >> s >> t;
  vector<pair<ll, ll>> lr(m);
  for (int i=0; i<m; ++i) cin >> lr[i].first >> lr[i].second;

  vector<ll> c(n+1, 0);
  for (int i=0; i<m; ++i) {
    ll l = lr[i].first;
    ll r = lr[i].second;
    c[l-1] += 1;
    c[r] -= 1;
  }
  for (int i=0; i<n; ++i) {
    c[i+1] += c[i];
  }

  for (int i=0; i<n; ++i) {
    if (c[i]%2 == 0) {
      cout << s[i];
    } else {
      cout << t[i];
    }
  }
  cout << endl;
  return 0;
}
