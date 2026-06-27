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

const long long LL_INF = 1LL << 60;

int main() {
  ll t; cin >> t;
  for (int v=0; v<t; ++v) {
    ll n, w; cin >> n >> w;
    vector<ll> c(n);
    for (int i=0; i<n; ++i) cin >> c[i];

    ll ans = LL_INF;

    for (int i=0; i<n; i+=w) {
      ll s = 0;
      if ((i+x)%(2*w) < w) {
        s += c[i];
      }
      if (s < ans) ans = s;
    }

    cout << ans << endl;
  }
  return 0;
}

