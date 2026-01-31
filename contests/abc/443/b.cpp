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
  ll n, k; cin >> n >> k;
  ll acc = 0;
  ll ans = 0;
  for (;;) {
    acc += n;
    if (acc >= k) {
      cout << ans << endl;
      return 0;
    }
    n += 1;
    ans += 1;
  }
  return 0;
}

