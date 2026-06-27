#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

int main() {
  ll Q; cin >> Q;
  queue<ll> q;

  ll offset = 0;

  for (int queryindex=0; queryindex<Q; ++queryindex) {
    int ty; cin >> ty;
    if (ty == 1) {
      q.push(-offset);
    } else if (ty == 2) {
      ll t; cin >> t;
      offset += t;

    } else if (ty == 3) {
      ll h; cin >> h;
      ll ans = 0;
      while (!q.empty() && q.front() >= h - offset) {
        q.pop();
        ans += 1;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
