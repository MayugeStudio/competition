#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i=0; i<m; ++i) {
    int v, u; cin >> v >> u;
    v--, u--;
    g[v].push_back(u);
    g[u].push_back(v);
  }

  for (int i=0; i<n; ++i) {
   cout << g[i].size() << endl;
  }
  return 0;
}
