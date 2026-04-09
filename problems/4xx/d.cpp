#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
using namespace std;
using ll = long long;

int diry[] = {0, 0, 1, -1};
int dirx[] = {1, -1, 0, 0};
char dirc[] = {'<', '>', '^', 'v'};

int main() {
  ll sx = -1;
  ll sy = -1;
  ll h, w; cin >> h >> w;
  vector<string> s(h);
  for (int i=0; i<h; ++i) cin >> s[i];
  for (int i=0; i<w; ++i) for (int j=0; j<w; ++j) {
    if (s[i][j] == 'E') {
      sy = i;
      sx = j;
    }
  }

  if (sy == -1 && sx == -1) return 0;

  vector<vector<char>> t(h, vector<char>(w, '@'));

  queue<pair<ll, ll>> que;
  que.push({sy, sx});
  t[sy][sx] = 'E';

  while (!que.empty()) {
    auto v = que.front(); que.pop();
    for (int i=0; i<4; ++i) {
      ll ny = v.first + diry[i];
      ll nx = v.second + dirx[i];
      if (ny < 0 || ny >= h || nx < 0 || ny >= w) continue;
      // visited
      if (t[ny][nx] != '@') continue;

      if (s[ny][nx] == '.') {
        que.push({ny, nx});
        t[ny][nx] = dirc[i];
      } else if (s[ny][nx] == '#') {
        t[ny][nx] = '#';
      }
    }
  }

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      cout << t[i][j];
    }
    cout << endl;
  }

  return 0;
}

