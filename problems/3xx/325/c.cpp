#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int dx[] = {0, -1, 1, 0, -1, 1, -1, 1};
int dy[] = {1, 0, 0, -1, 1, 1, -1, -1};


int main() {
  int h, w; cin >> h >> w;

  vector<string> s(h);
  for (int i=0; i<h; ++i) cin >> s[i];


  vector<vector<bool>> visited(h, vector<bool>(w, false));
  auto bfs = [&](int sx, int sy) -> void {
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    while (!q.empty()) {
      auto [x, y] = q.front(); q.pop();
      visited[y][x] = true;

      for (int i=0; i<8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= w ||
            ny < 0 || ny >= h) {
          continue;
        }
        if (visited[ny][nx]) continue;
        if (s[ny][nx] == '.') continue;

        visited[ny][nx] = true;
        q.push(make_pair(nx, ny));
      }
    }
  };

  int ans = 0;
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (visited[i][j]) continue;
      if (s[i][j] == '.') continue;
      ans++;
      bfs(j, i);
    }
  }

  cout << ans << endl;

  return 0;
}
