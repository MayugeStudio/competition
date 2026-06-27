#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<vector<ll>> g(n);
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      int a; cin >> a;
      if (a == 1) {
        g[i].push_back(j);
      }
    }
  }

  for (int i=0; i<n; ++i) sort(g[i].begin(), g[i].end());

  for (int i=0; i<n; ++i) {
    for (int j=0; j<g[i].size(); ++j) {
      cout << g[i][j]+1 << " ";
    }
    cout << '\n';
  }

  return 0;
}
