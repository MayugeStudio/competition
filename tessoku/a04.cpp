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

int n;
int main() {
  cin >> n;

  string ans;
  while (n != 0) {
    ans += (char)(n % 2 + '0');
    n /= 2;
  }
  int rest = 10 - ans.size();
  for (int i=0; i<rest; ++i) cout << "0";
  reverse(all(ans));
  cout << ans << endl;
  return 0;
}

