#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  for (int i=0; i<m; ++i) {
    int a, b; cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
  }

  int ans = 0;
  for (int sv=0; sv<n; ++sv) {
    queue<int> q;
    vector<int> used(n);
    used[sv]=1;
    ++ans;
    q.push(sv);
    while (q.size() != 0) {
      int v = q.front(); q.pop();
      for (int u : to[v]) {
        if (used[u]) continue;
        ++ans;
        used[u] = 1;
        q.push(u);
      }
    }
  }
  cout << ans << endl;

  return 0;
}
