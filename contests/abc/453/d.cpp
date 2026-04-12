#include <iostream>
#include <vector>
#include <string>
#include <
using namespace std;

int dirx[] = {0, 0, 1, -1};
int diry[] = {1, -1, 0, 0};

struct movement { int dir, row, col; }

int main() {
  int h, w; cin >> h >> w;
  vector<string> g(h);
  int srow, scol;
  int grow, gcol;
  for (int i=0; i<h; ++i) cin >> g[i];
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (g[i][j] == 'S') {
        srow = i;
        scol = j;
      }
      if (g[i][j] == 'G') {
        grow = i;
        gcol = j;
      }
    }
  }

  int prev_dir = -1;

  queue<movement> que;
  vector<vector<bool>> visited(h, vector<bool>(w));

  while (!que.empty()) {
    movement v = que.front(); que.pop();
    if (g[v.row][v.col] == '#') continue;
    if (g[v.row][v.col] == '.' 
        || g[v.row][v.col] == 'S') continue;

    if (g[v.row][v.col] == 'o') {
      int nrow = v.row + diry[v.dir];
      int ncol = v.col + dirx[v.dir];
      if (nrow < 0 || nrow >= v.row || ncol < 0 || ncol >= v.col) continue;
    }
    if (g[v.row][v.col] == 'x') {
      for (int i=0; i<4; ++i) {
        if (i == dir) continue;
        int nrow = v.row + diry[i];
        int ncol = v.col + dirx[i];
        if (nrow < 0 || nrow >= v.row || ncol < 0 || ncol >= v.col) continue;
        if (nrow)
      }
    }

    if (g[v.row][v.col] == 'G') {
      continue;
    }

    if ()
    for (int i=0; i<4; ++i) {
      int ny = v.first + diry[i];
      int nx = v.second + dirx[i];
    }
  }

  return 0;
}
