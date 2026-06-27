#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
  ll n, m, t; cin >> n >> m >> t;
  vector<ll> a(n-1);
  vector<ll> x(m), y(m);
  vector<ll> room(n, 0);
  for (int i=0; i<n-1; ++i) cin >> a[i];
  for (int i=0; i<m; ++i) {
    int u, v; cin >> u >> v;
    room[u-1] = v;
  }

  string ans = "Yes";

  for (int i=1; i<n; ++i) {
    if (t-a[i-1] > 0) {
      t -= a[i-1];
      t += room[i];
    } else {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
