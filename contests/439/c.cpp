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

// 平方数かどうかの判定
bool is_square(long long N) {
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

int main() {
  ll n; cin >> n;

  vector<ll> c(n+1);

  for (ll x=1; x*x<=n; ++x) {
    for (ll y=x+1; x*x + y*y <= n; ++y) {
      c[x*x+y*y]++;
    }
  }

  vector<ll> ans;


  for (int i=1; i<=n; ++i) {
    if (c[i] == 1) ans.push_back(i);
  }

  cout << ans.size() << endl;

  for (int i=0; i<ans.size(); ++i) {
    if (i > 0) cout << " ";
    cout << ans[i];
  }
  cout << endl;
  return 0;
}

