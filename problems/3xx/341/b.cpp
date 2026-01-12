#include <iostream>
#include <utility>
#include <vector>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  vector<pll> st(n-1);
  for (int i=0; i<n-1; ++i) cin >> st[i].first >> st[i].second;

  for (int i=0; i<n-1; ++i) {
    ll cnt = a[i]/st[i].first;
    a[i] -= cnt;
    a[i+1] += st[i].second*cnt;
  }

  cout << a[n-1] << endl;

  return 0;
}
