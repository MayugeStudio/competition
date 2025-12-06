#include <iostream>
#include <queue>
using namespace std;
#define ll long long

ll n, m, q;
ll x[300000];
ll y[300000];
bool color[300000];
queue<ll> que;

int main() {
  cin >> n >> m;
  for (int i=0; i<m; ++i) cin >> x[i] >> y[i];
  for (int i=0; i<n; ++i) color[i] = false;


  cin >> q;
  for (int i=0; i<q; ++i) {
    ll type; cin >> type;
    ll v; cin >> v;

    if (type == 1) {
      cin >> v;
      color[v-1] = true;

    } else if (type == 2) {
      ll start = v;
      while (!color[v] && que.size() != 0) {
        for (int k=0; k<m; ++k) {
          if (x[m] == v) {
            que.push(y[m]);
          }
        }
        v = que.front();
        if (v == start) break;
        que.pop();
      }
      if (color[v]) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }


  return 0;
}
