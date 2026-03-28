#include <iostream>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  ll Q; cin >> Q;
  queue<pair<ll, ll>> q;

  for (int i=0; i<Q; ++i) {
    int t; cin >> t;
    if (t == 1) {
      ll c, x; cin >> c >> x;
      q.push(make_pair(c, x));
    } else if (t == 2) {
      ll k; cin >> k;
      ll ans = 0;
      while (k > 0) {
        auto& v = q.front();
        if (k > v.first) {
          k -= v.first;
          ans += v.second * v.first;
          q.pop();
        } else { // k <= v.first
          v.first -= k;
          ans += v.second * k;
          k = 0;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
