#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;


void solve() {
  int n; cin >> n;
  string str; cin >> str;
  vector<ll> x(n), y(n-1);

  for (int i=0; i<n; ++i) cin >> x[i];
  for (int i=0; i<n-1; ++i) cin >> y[i];

  ll s=0, r=0;
  if (str[0] == 'S') s = 0, r = -x[0];
  else s = -x[0], r = 0;

  for (int i=1; i<n; ++i) {
    // s, ns
    // S, 
    // r, nr
    ll ns = max(s, r+y[i-1]);
    ll nr = max(s, r);

    if (str[i] == 'R') ns -= x[i];
    else nr -= x[i];
    s = ns;
    r = nr;
  }

  cout << max(s, r) << endl;
}

int main() {
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
