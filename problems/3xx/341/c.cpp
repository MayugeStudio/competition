#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <utility>

using namespace std;

int h, w, n; 
string t;
vector<string> s;

bool check(int y, int x) {
  for (char c: t) {
    if (c == 'U') y--;
    if (c == 'D') y++;
    if (c == 'L') x--;
    if (c == 'R') x++;
    if (y < 0 || y >= h || x < 0 || x >= w) return false;
    if (s[y][x] == '#') return false;
  }
  return true;
}

int main() {
  cin >> h >> w >> n;
  cin >> t;
  s.resize(h);
  for (int i=0; i<h; ++i) cin >> s[i];

  set<pair<int, int>> ans;

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (s[i][j] == '#') continue;
      if (check(i, j)) {
        ans.insert({i, j});
      }
    }
  }

  cout << ans.size() << endl;


  return 0;
}
