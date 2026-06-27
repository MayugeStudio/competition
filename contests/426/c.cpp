#include <iostream>
#include <queue>
#include <utility>

using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
  for (int i=1; i<=n; ++i) pq.push({i, 1});

  for (int i=0; i<q; ++i) {
    ll x, y; cin >> x >> y;
    ll cnt = 0;
    
    while (!pq.empty()) {
      auto v = pq.top();
      if (v.first <= x) {
        cnt += v.second; pq.pop();
      } else {
        break;
      }
    }
    if (cnt > 0) pq.push({y, cnt});
    cout << cnt << endl;
  }
  return 0;
}
