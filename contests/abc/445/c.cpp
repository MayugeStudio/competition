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

using pib = pair<int, bool>;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  vector<pib> terminal(n, {0, false});
  for (int i=0; i<n; ++i) {
    cin >> a[i]; a[i]--;
    if (a[i] == i) {
      terminal[i].first  = i;
      terminal[i].second = true;
    }
  }

  vector<ll> ans(n);
  for (int i=n-1; i>=0; --i) {
    if (terminal[i].second) {

      ans[i] = terminal[i].first;

    } else if (terminal[a[i]].second) {

      terminal[i].first = terminal[a[i]].first;
      terminal[i].second = true;
      ans[i] = terminal[i].first;

    }
  }

  for (int i=0; i<n; ++i) {
    if (i > 0) cout << " ";
    cout << ans[i]+1;
  }
  cout << endl;

  return 0;
}

