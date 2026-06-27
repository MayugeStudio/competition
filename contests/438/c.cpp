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

const ll N = 2e5 + 5;
ll a[N];
int main() {
  ll n; cin >> n;
  ll m = 0;
  for (ll i=0; i<n; ++i) {
    m++; cin >> a[m];
    while (m >= 4 && a[m-3] == a[m] && a[m-2] == a[m] && a[m-1] == a[m]) m -= 4;
  }
  cout << m << endl;
  return 0;
}

