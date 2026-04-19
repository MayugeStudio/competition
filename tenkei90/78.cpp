#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);

  for (int i=0; i<m; ++i) {
    int u, v; cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans = 0;
  for (int i=0; i<n; ++i) {
    int cnt = 0;
    for (int j=0; j<g[i].size(); ++j) {
      if (g[i][j] < i) {
        cnt += 1;
      }
    }
    if (cnt == 1) ans += 1;
  }
  cout << ans << endl;

  return 0;
}
