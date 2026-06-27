#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  // pos -> value
  vector<ll> val(n);
  // value -> pos
  vector<ll> pos(n);
  for (int i=0; i<n; ++i) pos[i] = i;
  for (int i=0; i<n; ++i) val[i] = pos[i];

  for (int i=0; i<q; ++i) {
    ll x; cin >> x; --x;

    ll p = pos[x];
    ll p2 = p + 1;
    if (p == n-1) p2 = p-1;
    ll x2 = val[p2];
    
    swap(pos[x], pos[x2]);
    swap(val[p], val[p2]);
  }

  for (auto v: val) cout << v + 1 << " ";
  cout << endl;

  return 0;
}

