#include <algorithm>
#include <iostream>
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

  for (int i=0; i<n; ++i) {
    cout << i+1 << ": {";
    sort(g[i].begin(), g[i].end());
    for (int j=0; j<g[i].size(); ++j) {
      cout << g[i][j]+1;
      if (j != g[i].size()-1) {
        cout << ", ";
      }
    }
    cout << "}" << endl;
  }

  return 0;
}

