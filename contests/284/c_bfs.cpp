#include <iostream>
#include <queue>
using namespace std;

using graph = vector<vector<int>>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> seen(n);
  graph g(n);
  for (int i=0; i<m; ++i) {
    int v, u; cin >> v >> u;
    v--; u--;
    g[v].push_back(u);
    g[u].push_back(v);
  }

  int ans = 0;

  queue<int> q;
  for (int i=0; i<n; ++i) {
    if (seen[i]) continue;
    ans++;
    q.push(i);
    while (!q.empty()) {
      int e = q.front(); q.pop();
      if (seen[e]) continue;
      seen[e] = true;
      for (int j=0; j<g[e].size(); ++j) {
        q.push(g[e][j]);
      }
    }
  }
  cout << ans << endl;
}
