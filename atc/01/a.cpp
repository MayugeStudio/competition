#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dirx[4] = {0, 0, 1, -1};
int diry[4] = {1, -1, 0, 0};

int h, w;
int sx, sy;
int gx, gy;
vector<string> g;
vector<vector<bool>> visited;

bool dfs(int x, int y) {
  if (visited[y][x]) return false;
  visited[y][x] = true;
  for (int i=0; i<4; ++i) {
    int nx = x + dirx[i];
    int ny = y + diry[i];
    if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
    if (g[ny][nx] == '#') continue;
    if (g[ny][nx] == 'g') return true;
    if (dfs(nx, ny)) return true;
  }
  return false;
}

int main() {
  cin >> h >> w;
  g = vector<string>(h);
  visited = vector<vector<bool>>(h, vector<bool>(w, false));

  for (int i=0; i<h; ++i) {
    cin >> g[i];
    for (int j=0; j<w; ++j) {
      if (g[i][j] == 's') {
        sx = j;
        sy = i;
      }
    }
  }

  if (dfs(sx, sy)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
