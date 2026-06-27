#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i=0; i<m; ++i) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  queue<int> que;
  vector<bool> visited(n, false);

  que.push(0);
  visited[0] = true;
  

  while (!que.empty()) {
    auto x = que.front(); que.pop();
    for (int i=0; i<g[x].size(); ++i) {
      if (visited[g[x][i]]) continue;
      que.push(g[x][i]);
      visited[g[x][i]] = true;
    }
  }

  bool ok1 = true;
  for (int i=0; i<n; ++i) {
    if (!visited[i]) {
      ok1 = false;
      break;
    }
  }

  bool ok2 = true;
  for (int i=0; i<n; ++i) {
    if (g[i].size() != 2) {
      ok2 = false;
      break;
    }
  }

  if (ok1 && ok2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}
