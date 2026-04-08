#include <iostream>
#include <queue>
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

  queue<int> q;
  vector<bool> visited(n, false);
  q.push(0);
  visited[0] = true;

  int ans = 0;

  for (int x: g[0]) {
    if (!visited[x]) {
      visited[x] = true;
      ans++;
      q.push(x);
    }
  }

  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int x: g[v]) {
      if (!visited[x]) {
        visited[x] = true;
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
