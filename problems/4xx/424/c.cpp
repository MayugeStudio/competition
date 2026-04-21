#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n; cin >> n;
  vector<vector<int>> g(n);
  vector<int> starts;
  for (int i=0; i<n; ++i) {
    int a, b; cin >> a >> b;
    if (a == 0 && b == 0) {
      starts.push_back(i);
      continue;
    }
    a--, b--;
    if (i != a) {
      g[a].push_back(i);
    }
    if (i != b) {
      g[b].push_back(i);
    }
  }

  vector<bool> visited(n, false);
  int ans = 0;
  auto dfs = [&](auto self, int x) {
    ans += 1;
    if (visited[x]) return;
    visited[x] = true;

    for (int i=0; i<g[x].size(); ++i) {
      if (visited[g[x][i]]) continue;
      self(self, g[x][i]);
    }
  };

  for (int i=0; i<starts.size(); ++i) {
    dfs(dfs, starts[i]);
  }

  cout << ans << endl;

  return 0;
}
