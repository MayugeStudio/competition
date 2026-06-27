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

ll ketawa(ll n) {
  ll res = 0;
  while (n != 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main() {
  ll n, k; cin >> n >> k;
  ll s = 0;
  int ans = 0;
  while (n > 0) {
    if (ketawa(n) == k) {
      ans++;      
    }
    n--;
  }

  cout << ans << endl;
  return 0;
}

