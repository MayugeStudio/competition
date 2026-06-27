#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <utility>
using namespace std;

vector<vector<int>> g;
vector<bool> visited;
int cnt = 0;

void dfs(int x) {
  visited[x] = true;
  for (auto v: g[x]) {
    if (!visited[v]) {
      cnt++;
      dfs(v);
    }
  }
}

int main() {
  int n, m; cin >> n >> m;
  g.resize(n);
  visited.resize(n);

  for (int i=0; i<m; ++i) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  for (int i=0; i<n; ++i) {
    if (!visited[i]) dfs(i);
  }
  cout << m - cnt << endl;

  return 0;
}
