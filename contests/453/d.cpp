#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define N (int)4e+6
#define D (int)4

int dirx[D] = {0, 0, 1, -1};
int diry[D] = {1, -1, 0, 0};

int prev[N+2];
vector<int> g[N+1];

int h, w;
int sy, sx;
int gy, gx;

void init() {
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      for (int d=0; i<D; ++d) prev[(i*h+j)*4+d] = -1;
      if (g[i][j] == 'S') {
        sy = i;
        sx = j;
      }
      if (g[i][j] == 'G') {
        gy = i;
        gx = j;
      }
    }
  }
}

int main() {
  cin >> h >> w;
  vector<string> g(h);
  for (int i=0; i<h; ++i) cin >> g[i];

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (g[i][j] == 'S') {
        sy = i;
        sx = j;
      }
      if (g[i][j] == 'G') {
        gy = i;
        gx = j;
      }
    }
  }

  int prev_dir = -1;

  vector<vector<bool>> visited(h, vector<bool>(w));

  while (!que.empty()) {
    movement v = que.front(); que.pop();
    if (g[v.y][v.x] == '#') continue;
    if (g[v.y][v.x] == '.' 
        || g[v.y][v.x] == 'S') continue;

    if (g[v.y][v.x] == 'o') {
      int ny = v.y + diry[v.dir];
      int nx = v.x + dirx[v.dir];
      if (ny < 0 || ny >= v.y || nx < 0 || nx >= v.x) continue;
    }
    if (g[v.y][v.x] == 'x') {
      for (int i=0; i<4; ++i) {
        if (i == dir) continue;
        int ny = v.y + diry[i];
        int nx = v.x + dirx[i];
        if (ny < 0 || ny >= v.y || nx < 0 || nx >= v.x) continue;
        if (ny)
      }
    }

    if (g[v.y][v.x] == 'G') {
      continue;
    }

    for (int i=0; i<4; ++i) {
      int ny = v.first + diry[i];
      int nx = v.second + dirx[i];
    }
  }

  return 0;
}
