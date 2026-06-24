#include "atcoder/modint.hpp"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  for (int i=0; i<m; ++i) {
    int a, b; cin >> a >> b;
    a--, b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, -1);
  vector<int> vs;
  q.push(0);
  dist[0] = 0;

  while(!q.empty()) {
    int u = q.front(); q.pop();
    vs.push_back(u);

    for (auto v: to[u]) {
      if (dist[v] != -1) continue;
      dist[v] = dist[u] + 1;
      q.push(v);
    }
  }

  vector<mint> dp(n);
  dp[0] = 1;
  for (auto v: vs) {
    for (auto u: to[v]) {
      if (dist[u] == dist[v] + 1) {
        dp[u] += dp[v];
      }
    }
  }

  mint ans = dp[n-1];

  cout << ans.val() << endl;

  return 0;
}
