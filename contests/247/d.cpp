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
      ll x, c; cin >> x >> c;
      q.push(make_pair(c, x));
    } else if (t == 2) {
      ll c; cin >> c;
      ll sum = 0;
      while (c > 0) {
        auto& v = q.front();
        if (c < v.first) {
          v.first -= c;
          sum += v.second * c;
          c = 0;
        } else { // c >= v.first
          c -= v.first;
          sum += v.second * v.first;
          q.pop();
        }
      }
      cout << sum << endl;
    }
  }

  return 0;
}
