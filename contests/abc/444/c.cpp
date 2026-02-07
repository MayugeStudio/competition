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
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  sort(all(a));

  set<ll> ans;

  if (n%2 == 0) {
    ll l = a[0] + a[n-1];
    bool ok = true;
    for (int i=1; i<(n-1)/2; ++i) {
      if (a[i] + a[n-1-i] != l) {
        ok = false;
        break;
      }
    }
    if (ok) ans.insert(l);
  }

  ll l = *max_element(all(a));
  ll num = n-1;

  while (a[num-1] == l) num -= 1;

  if (num%2 == 0) {
    bool ok = true;
    for (int i=0; i<num/2; ++i) {
      if (a[i] + a[num-1-i] != l) {
        ok = false;
        break;
      }
    }
    if (ok) ans.insert(l);
  }


  for (const auto& x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}

