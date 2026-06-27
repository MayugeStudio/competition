#include <vector>
#include <iostream>

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

  auto n1 = g[0];
  for (int i=0; i<n1.size(); ++i) {
    for (auto v: g[n1[i]]) {
      if (v == n-1) {
        cout << "POSSIBLE" << endl;
        return 0;
      }
    }
  }

  cout << "IMPOSSIBLE" << endl;

  return 0;
}
