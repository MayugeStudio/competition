#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  vector<vector<ll>> v(n);
  for (int i=0; i<m; ++i) {
    ll a, b; cin >> a >> b;
    a--, b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  for (int i=0; i<n; ++i) {
    sort(v[i].begin(), v[i].end());
  }

  for (int i=0; i<n; ++i) {
    cout << v[i].size() << " ";
    for (int j=0; j<v[i].size(); ++j) {
      cout << v[i][j]+1 << " ";
    }
    cout << endl;
  }

  return 0;
}

