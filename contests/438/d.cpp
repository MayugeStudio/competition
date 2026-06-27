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
  ll n; cin >> n;
vector<ll> a(n), b(n), c(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];
  for (int i=0; i<n; ++i) cin >> c[i];

  vector<ll> as(n+1);
  vector<ll> bs(n+1);
  vector<ll> cs(n+1);
  vector<ll> ds(n+1);
  vector<ll> fs(n+1);

  for (int i=0; i<n; ++i) as[i+1] = a[i] + as[i];
  for (int i=0; i<n; ++i) bs[i+1] = b[i] + bs[i];
  for (int i=0; i<n; ++i) cs[i+1] = c[i] + cs[i];

  for (int i=0; i<n; ++i) ds[i+1] = as[i] - bs[i];
  for (int i=0; i<n; ++i) fs[i+1] = bs[i] - cs[i];

  const ll INF = 1000000000000000010;
  ll ans = 0;
  ll mx = -INF;
  for (ll l=1; l<n; ++l) {
    if (ans < mx + fs[l]) ans = mx + fs[l] + cs[n];
    if (mx < ds[l]) mx = ds[l];
  }
  cout << ans << endl;

  return 0;
}

