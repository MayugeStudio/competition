#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;
using ll = long long;

int dirx[4] = {0, 0, 1, -1};
int diry[4] = {1, -1, 0, 0};

int main() {
  int h, w; cin >> h >> w;
  vector<string> g(h);
  for (int i=0; i<h; ++i) cin >> g[i];

  vector<vector<ll>> dp(h, vector<ll>(w, -1));

  queue<pair<ll, ll>> q;
  q.push({0, 0});
  dp[0][0] = 0;

  while (!q.empty()) {
    auto v = q.front(); q.pop();
    int x = v.first;
    int y = v.second;
    for (int i=0; i<4; ++i) {
      ll dx = dirx[i];
      ll dy = diry[i];
      ll nx = x + dx;
      ll ny = y + dy;
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if (dp[ny][nx] != -1) continue;
      if (g[ny][nx] != g[y][x]) {
        dp[ny][nx] = dp[y][x] + 1;
        q.push({nx, ny});
      }
    }
  }

  cout << dp[h-1][w-1] << endl;

  return 0;
}
