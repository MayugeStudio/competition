#include <iostream>
#include <queue>
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

  vector<bool> visited(n, false);
  vector<int> ans;
  // auto dfs = [&](auto self, int x, int cnt) {
  //   ans.push_back(cnt);
  //   if (visited[x]) return;
  //
  //   visited[x] = true;
  //   for (int i=0; i<g[x].size(); ++i) {
  //     if (visited[g[x][i]]) continue;
  //     self(self, g[x][i], cnt+1);
  //   }
  // };

  auto bfs = [&](int x) {
    queue<int> q;
    q.push(x);
    visited[x] = true;
    int cnt = 0;
    while(!q.empty()) {
      int y = q.front(); q.pop();
      cnt += 1;
      for (int i=0; i<g[y].size(); ++i) {
        if (visited[g[y][i]]) continue;
        q.push(g[y][i]);
        visited[g[y][i]] = true;
      }
    }
    ans.push_back(cnt);
  };

  for (int i=0; i<n; ++i) {
    if (!visited[i]) {
      // dfs(dfs, i, 1);
      bfs(i);
    }
  }

  int ret = 0;
  for (int i=0; i<ans.size(); ++i) {
    if (ans[i] > ret) ret = ans[i];
  }
  cout << ret << endl;

  return 0;
}

