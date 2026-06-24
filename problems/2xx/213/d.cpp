#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> to(n);
  for (int i=0; i<n-1; ++i) {
    int a, b; cin >> a >> b;
    a--, b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  for (int i=0; i<n; ++i) sort(to[i].begin(), to[i].end());

  vector<bool> visited(n, false);

  auto dfs = [&](auto self, int x){
    if (visited[x]) { return; }
    visited[x] = true;

    cout << x+1 << " ";

    for (auto e: to[x]) {
      if (visited[e]) continue;
      self(self, e);
      cout << x+1 << " ";
    }

  };

  dfs(dfs, 0);

  cout << endl;

  return 0;
}
