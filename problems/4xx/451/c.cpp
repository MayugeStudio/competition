#include <iostream>
#include <queue>
using namespace std;
using ll = long long;

struct Node {
  Node *left;
  Node *right;
  ll value;
};

int main() {
  ll Q; cin >> Q;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  for (int i=0; i<Q; ++i) {
    ll t, h; cin >> t >> h;
    if (t == 1) {
      pq.push(h);
    } else {
      while (!pq.empty() && pq.top() <= h) {
        pq.pop();
      }
    }
    cout << pq.size() << endl;
  }
  return 0;
}
