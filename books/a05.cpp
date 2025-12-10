// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define rep(i, x, limit) for (int i=(int)x; (int)i<limit; ++i)
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

int n, k;
int main() {
  cin >> n >> k;
  int ans = 0;
  for (int r=1; r<=n && r<=k; ++r) {
    for (int b=1; b<=n && b<=k-r; ++b) {
      if (k-r-b <= n && k-r-b >= 1) ans++;
    }
  }
  cout << ans << endl;

  return 0;
}

