#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int dirx[4] = {0, 0, 1, -1};
int diry[4] = {1, -1, 0, 0};

int main() {
  int R, C; cin >> R >> C;
  int sy, sx; cin >> sy >> sx;
  int gy, gx; cin >> gy >> gx;
  sy--, sx--, gy--, gx--;
  vector<vector<char>> v(R, vector<char>(C));
  for (int i=0; i<R; ++i) {
    for (int j=0; j<C; ++j) {
      cin >> v[i][j];
    }
  }

  vector<vector<int>> dp(R, vector<int>(C, -1));
  dp[sy][sx] = 0;

  queue<pair<int, int>> q;
  q.push({sy, sx});
  while (!q.empty()) {
    auto elem = q.front(); q.pop();
    int y = elem.first;
    int x = elem.second;

    if (v[y][x] == '.') {
      for (int i=0; i<4; ++i) {
        int ny = y + diry[i];
        int nx = x + dirx[i];
        if (dp[ny][nx] != -1) continue;
        dp[ny][nx] = dp[y][x] + 1;
        q.push({ny, nx});
      }
    } else {
    }

    if (y == gy && x == gx) {
      break;
    }

  }

  cout << dp[gy][gx] << endl;

  return 0;
}
