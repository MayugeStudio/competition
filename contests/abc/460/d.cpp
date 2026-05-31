#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;

#define TEST false

int h, w; 
int dx[] = { -1,  0,  1, -1, 1, -1, 0,  1};
int dy[] = { -1, -1, -1,  0, 0,  1, 1,  1};

void dump(vector<vector<int>>& table) {
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (table[i][j]%2==0) cout << '#';
      else cout << '.';
    }
    cout << '\n';
  }
}

#if TEST
void dump2(vector<vector<int>>& table) {
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      cout << table[i][j];
      if (j != w-1) cout << ' ';
    }
    cout << '\n';
  }
}
#else
void dump2(vector<vector<int>>& table) {}
#endif

int main() {
  cin >> h >> w;
  vector<string> ss(h);

  for (int i=0; i<h; ++i) cin >> ss[i];

  queue<pair<int, int>> q; // y, x
  vector<vector<int>> table(h, vector<int>(w, 0));
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (ss[i][j] == '#') q.push({i, j});
    }
  }

  if (q.size() == h*w) {
    string s = string(w, '.');
    for (int i=0; i<h; ++i) {
      cout << s << endl;
    }
    return 0;
  }

  while (!q.empty()) {
    auto pos = q.front(); q.pop();
    int score = table[pos.first][pos.second];

    for (int i=0; i<8; ++i) {
      int y = pos.first+dy[i];
      int x = pos.second+dx[i];
      if (y < 0 || y >= h || x < 0 || x >= w) continue;

      if (ss[y][x] == '#') continue;

      // '.' 確定
      if (score+1 < table[y][x] || table[y][x] == 0) {
        table[y][x] = score+1;
        q.push({y, x});
      }
    }
  }

  dump(table);

  return 0;
}
