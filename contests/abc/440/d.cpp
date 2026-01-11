// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

int main() {
  ll n, q; cin >> n >> q;
  set<ll> sa;
  vector<ll> va(n);
  for (int i=0; i<n; ++i) {
    cin >> va[i];
    sa.insert(va[i]);
  }

  sort(all(va));

  for (int i=0; i<q; ++i) {
    ll x, y; cin >> x >> y;
    ll cnt = 0;
    ll cur = x;
    while (cnt < y) {
      if (sa.count(cur) == 0) {
        cnt++;
      }
      if (cnt >= y) break;
      cur++;
    }
    cout << cur << endl;
  }
  return 0;
}

