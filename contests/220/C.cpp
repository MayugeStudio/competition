#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

ll n, x;
vector<ll> a;

int main() {
  cin >> n;
  a.resize(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  cin >> x;

  ll suma = 0;
  for (int i=0; i<n; ++i) suma += a[i];

  ll p = x / suma;
  ll sumb = p * suma;
  ll ans = p * n;

  for (ll val: a) {
    sumb += val;
    ans++;
    if (sumb > x) {
      cout << ans << endl;
      return 0;
    }
  }
  return 0;
}
