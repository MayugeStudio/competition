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
  ll n, m; cin >> n >> m;
  vector<ll> a(n), b(m);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<m; ++i) cin >> b[i];

  sort(all(b));
  vector<ll> bs(m+1, 0);
  for (int i=0; i<m; ++i) {
    bs[i+1] = bs[i] + b[i];
  }


  ll ans = 0;
  for (int i=0; i<n; ++i) {
    ll right_count = b.end() - upper_bound(all(b), a[i]);
    ll left_count = m - right_count;
    
    ll rd = (bs[m] - bs[left_count]) - a[i] * right_count;
    ans += a[i] * left_count - bs[left_count] + rd;
    ans = (ans+998244353)%998244353;
  }
  cout << ans << endl;
  return 0;
}

