#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i=0; i<m; ++i) {
    int a, b;
    cin >> a >> b; 
    a--, b--;
    g[a].push_back(b);
  }

  int ans = 0;
  vector<bool> visited(n);
  auto dfs = [&](auto self, int v) -> void{
    if (visited[v]) return;
    visited[v] = true;
    ans ++;
    for (auto x: g[v]) {
      self(self, x);
    }
  };

  dfs(dfs, 0);

  cout << ans << endl;
  
  return 0;
}
