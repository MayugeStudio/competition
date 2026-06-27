#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
  int n, q; cin >> n >> q;
  vector<ll> a(n), b(n);
  ll sum = 0;

  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];

  for (int i=0; i<n; ++i) {
    sum += min(a[i], b[i]);
  }


  for (int i=0; i<q; ++i) {
    char c; ll x, v;
    cin >> c >> x >> v;
    x--;
    if (c == 'A') {
      ll old_val = min(a[x], b[x]);
      a[x] = v;
      ll new_val = min(a[x], b[x]);
      ll diff = new_val - old_val;
      sum += diff;
    } else {
      ll old_val = min(a[x], b[x]);
      b[x] = v;
      ll new_val = min(a[x], b[x]);
      ll diff = new_val - old_val;
      sum += diff;
    }
    cout << sum << endl;
  }
  return 0;
}
