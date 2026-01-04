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
  int n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  ll ans = 0;
  for (int i=0; i<n; ++i) {
    ll ir = a[i] * 5 * 3;
    for (int j=0; j<n; ++j) {
      ll jr = a[j] * 3 * 7;
      if (ir != jr) continue;
      for (int k=0; k<n; ++k) {
        ll kr = a[k] * 7 * 5;
        if (ir != kr) continue;

        if ((max({i, j, k}) == j) || 
            (min({i, j, k}) == j)) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}

