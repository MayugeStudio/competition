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

bool cmp(pll a, pll b) {
  return a.first + a.second > b.first + b.second;
}

void solve() {
  ll n; cin >> n;
  vector<pll> deers(n);

  for (int i=0; i<n; ++i) cin >> deers[i].first >> deers[i].second;
  sort(all(deers), cmp);

  ll ans = n;
  ll power = 0;
  ll weight = 0;

  for (int i=0; i<n; ++i) {
    weight += deers[i].first;
  }

  for (int i=0; i<n; ++i) {
    weight -= deers[i].first;
    power += deers[i].second;
    ans--;
    if (power >= weight) {
      break;
    }
  }
  cout << ans << endl;
}

int main() {
  ll t; cin >> t;
  for (int i=0; i<t; ++i) {
    solve();
  }
  return 0;
}

