#include <iostream>
#include <functional>
#include <queue>

using namespace std;
using ll = long long;

int main() {
  int q; cin >> q;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  ll offset = 0;
  for (int i=0; i<q; ++i) {
    int type; cin >> type;
    switch(type) {
      case 1:
        {
          ll x; cin >> x;
          pq.push(x-offset);
        } break;
      case 2:
        {
          ll x; cin >> x;
          offset += x;
        } break;
      case 3:
        {
          ll v = pq.top(); pq.pop();
          cout << v + offset << endl;
        } break;
    }
  }
  return 0;
}
