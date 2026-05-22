#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);

  for (int i=0; i<m; ++i) {
    int a, b; cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<bool> visited(n);
  int ans = 0;
  for (int i=0; i<n; ++i) {
    if (visited[i]) continue;

    ans += 1;
    queue<int> q;
    q.push(i);
    visited[i] = true;

    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (int x: g[v]) {
        if (visited[x]) continue;
        visited[x] = true;
        q.push(x);
      }
    }
  }

  cout << ans-1 << endl;

  return 0;
}

