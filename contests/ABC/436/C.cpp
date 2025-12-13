// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define rep(i, x, limit) for (int i=(int)(x); (int)i<(limit); ++(i))
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

ll n, m;
set<pll> s;

void solve(ll r, ll c) {
  for (int a=0; a<2; ++a) {
    for (int b=0; b<2; ++b) {
      pll k = {r+a, c+b};
      if (s.count(k) >= 1) {
        return;
      }
    }
  }

  for (int a=0; a<2; ++a) {
    for (int b=0; b<2; ++b) {
      pll k = {r+a, c+b};
      s.insert(k);
    }
  }
}

int main() {
  cin >> n >> m;

  for (int i=0; i<m; ++i) {
    int r, c;
    cin >> r >> c;
    solve(r, c);
  }
  cout << s.size()/4 << endl;

  return 0;
}

