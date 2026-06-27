#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, t; cin >> n >> t;
  vector<ll> v(n);
  for (int i=0; i<n; ++i) cin >> v[i];
  
  ll s = 0;
  for (int i=0; i<n; ++i) s += v[i];

  vector<ll> vs(n+1);
  for (int i=0; i<n; ++i) vs[i+1] = vs[i] + v[i];

  t %= s;

  for (int i=1; i<n+1; ++i) {
    if (t <= vs[i]) {
      cout << i << " " << t-vs[i-1] << endl;
      break;
    }
  }

  return 0;
}
