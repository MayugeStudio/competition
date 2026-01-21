#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, k, x; cin >> n >> k >> x;
  vector<ll> a(n);
  ll sum = 0;
  for (int i=0; i<n; ++i) {
    cin >> a[i];
    sum += a[i];
  }

  ll c = 0;
  for (int i=0; i<n; ++i) {
    c += a[i]/x;
    a[i] %= x;
  }

  // c >= k -> use all coupons
  if (c >= k) {
    cout << sum - k*x << endl;
    return 0;
  }

  // k < c -> 
  k -= c;
  sort(a.rbegin(), a.rend());
  for (int i=0; i<min(n, k); ++i) a[i] = 0;

  ll ans = 0;
  for (int i=0; i<n; ++i) ans += a[i];

  cout << ans << endl;
  
  return 0;
}
