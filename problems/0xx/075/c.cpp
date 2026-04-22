#include <iostream>
#include <vector>
#include <queue>
using namespace std;




int main() {
  int n, m; 
  cin >> n >> m;
  vector<vector<bool>> g(n, vector<bool>(n, false));
  vector<int> a(m), b(m);
  for (int i=0; i<m; ++i) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    g[a[i]][b[i]] = true;
    g[b[i]][a[i]] = true;
  }

  vector<bool> visited(n, false);
  auto bfs = [&](int a) -> void {
    queue<int> q;
    q.push(a);
    visited[a] = true;

    // BFS
    while (!q.empty()) {
      int x = q.front(); q.pop();
      for (int i=0; i<n; ++i) {
        if (!g[x][i]) continue;
        if (visited[i]) continue;
        visited[i] = true;
        q.push(i);
      }
    }
  };

  int ans = 0;

  for (int i=0; i<m; ++i) {
    g[a[i]][b[i]] = false;
    g[b[i]][a[i]] = false;

    for (int j=0; j<n; ++j) visited[j] = false;

    bfs(0);

    bool bridge = false;
    for (int j=0; j<n; ++j) {
      if (!visited[j]) {
        bridge = true;
      }
    }
    if (bridge) ans += 1;

    g[a[i]][b[i]] = true;
    g[b[i]][a[i]] = true;
  }

  cout << ans << endl;

  return 0;
}

