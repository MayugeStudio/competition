#include <iostream>
#include <vector>
using namespace std;
using graph = vector<vector<int>>;

int ans;
vector<int> seen;

void dfs(graph &g, int e) {
  for (int i=0; i<g[e].size(); ++i) {
    if (!seen[g[e][i]]) {
      seen[g[e][i]] = true;
      dfs(g, g[e][i]);
    }
  }
}

int main() {
  int n, m; cin >> n >> m;
  seen.resize(n);
  graph g(n);
  for (int i=0; i<m; ++i) {
    int v, u; cin >> v >> u;
    v--; u--;
    g[v].push_back(u);
    g[u].push_back(v);
  }

  int ans = 0;

  for (int i=0; i<n; ++i) {
    if (!seen[i]) {
      seen[i] = true;
      ans++;
      dfs(g, i);
    }
  }
  cout << ans << endl;
}
