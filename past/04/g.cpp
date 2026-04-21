#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int main() {
  int n, m; cin >> n >> m;
  vector<string> g(n);
  for (int i=0; i<n; ++i) cin >> g[i];
  int yuka = 0;
  for (int i=0; i<n; ++i) {
    yuka += count(g[i].begin(), g[i].end(), '.');
  }

  // pair<row, col>

  vector<vector<bool>> visited(n, vector<bool>(m, false));
  int cnt = 0;

  auto dfs = [&](auto self, pair<int, int> p) -> void {
    cnt += 1;
    visited[p.first][p.second] = true;
    for (int i=0; i<4; ++i) {
      int ny = p.first + dy[i];
      int nx = p.second + dx[i];
      if (ny >= n || ny < 0 || nx >= m || nx < 0) {
        continue;
      }
      if (g[ny][nx] == '#') continue;
      if (visited[ny][nx]) continue;
      self(self, {ny, nx});
    }
  };

  int ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      if (g[i][j] == '.') continue;
      g[i][j] = '.';
      cnt = 0;
      for (int i=0; i<n; ++i) visited[i] = vector<bool>(m, false);
      dfs(dfs, {i, j});
      if (yuka+1 == cnt) {
        ans += 1;
      }
      g[i][j] = '#';
    }
  }

  cout << ans << endl;

  return 0;
}

