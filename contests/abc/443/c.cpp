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
  ll n, t; cin >> n >> t;
  vector<ll> a(n+1);
  for (int i=0; i<n; ++i) cin >> a[i];
  a[n] = t;

  ll i=0;
  ll ans = 0;
  ll next = 0;
  while (i < n+1 && next < t) {
    if (a[i] < next) {
      i++;
      continue;
    } else {
      ans += a[i] - next;
      next = a[i] + 100;
      i++;
    }
  }

  cout << ans << endl;

  return 0;
}

