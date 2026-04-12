#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> l(n);
  for (int i=0; i<n; ++i) cin >> l[i];
  for (int i=0; i<n; ++i) l[i] *= 10;

  ll ans = 0;
  ll s = 5;
  for (int i=0; i<n; ++i) {
    if (s < 0 && s + l[i] >= 0) {
      ans++;
      s += l[i];
    } else if (s > 0 && s - l[i] <= 0) {
      ans++;
      s -= l[i];
    } else {
      if (abs(s - l[i]) < abs(s + l[i])) {
        s -= l[i];
      } else {
        s += l[i];
      }
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
