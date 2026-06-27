#include <iostream>
#include <vector>
using namespace std;



int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g = vector<vector<int>>(n);
  vector<bool> seen(n);
  vector<bool> visited(n);
  vector<int> adj(n);

  for (int i=0; i<m; ++i) {
    int u, v; cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  if (m != n - 1) {
    cout << "No" << endl;
    return 0;
  }

  auto dfs = [&](auto self, int x, int p) -> bool {
    if (seen[x]) return true;
    if (visited[x]) return false;

    seen[x] = true;
    for (int v: g[x]) {
      if (v == p) continue;
      if (self(self, v, x)) return true;
    }
    seen[x] = false;
    visited[x] = true;
    return false;
  };

  if (dfs(dfs, 0, -1)) {
    cout << "No" << endl;
    return 0;
  }

  int cnt = 0;
  for (auto x: g) {
    if (x.size() == 1) cnt += 1;
    if (x.size() > 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i=0; i<n; ++i) {
    if (!visited[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;


  return 0;
}
