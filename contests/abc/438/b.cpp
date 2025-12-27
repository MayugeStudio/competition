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


int calc_cost(string x, string y) {
  if (x == y) return 0;
  int res = 0;
  for (int i=0; i<x.size(); ++i) {
    if (x[i] < y[i]) {
      res += y[i] - x[i];
    } else if (x[i] > y[i]) {
      res += 10 - (x[i] - y[i]);
    } else {
      continue;
    }
  }
  return res;
}

int main() {
  int n, m; cin >> n >> m;
  string s, t; cin >> s >> t;
  vector<string> substrs(n-m+1);

  for (int i=0; i<=n-m; ++i) substrs[i] = s.substr(i, m);

  vector<int> costs(n-m+1);
  for (int i=0; i<costs.size(); ++i) {
    costs[i] = calc_cost(t, substrs[i]);
  }

  cout << *min_element(all(costs)) << endl;

  return 0;
}

