#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> p(n);

  for (int i=0; i<n; ++i) cin >> p[i];

  vector<ll> z = p;

  sort(z.begin(), z.end());
  ll t = z[k-1];

  for (int i=k-1; i<n; ++i) {

  }

  return 0;
}
