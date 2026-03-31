#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  vector<vector<ll>> g(n, vector<ll>(n, 0));
  for (int i=0; i<m; ++i) {
    ll a, b; cin >> a >> b;
    a--, b--;
    g[a][b] = 1;
    g[b][a] = 1;
  }

  ll ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=i; j<n; ++j) {
      for (int k=j; k<n; ++k) {
        if (g[i][j] && g[j][k] && g[k][i]) {
          ans ++;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}
