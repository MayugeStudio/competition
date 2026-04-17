#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  vector<ll> s(n+1);
  for (int i=0; i<n; ++i) cin >> a[i];
  sort(a.begin(), a.end());

  s[0] = 0;
  for (int i=0; i<n; ++i) {
    s[i+1] = s[i] + a[i];
  }

  ll ans = 0;
  for (int i=0; i<n; ++i) {
    ans += a[i]*i - s[i];
  }

  cout << ans << endl;

  return 0;
}
