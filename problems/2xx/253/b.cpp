#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct vec2 {int x, y;};

int main() {
  int h, w; cin >> h >> w;
  vector<string> vs(h);
  for (int i=0; i<h; ++i) cin >> vs[i];

  vec2 p1 = {-1, -1};
  vec2 p2 = {-1, -1};
  
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (vs[i][j] == 'o') {
        p1.x = j;
        p1.y = i;
        vs[i][j] = '-';
        break;
      }
    }
    if (p1.x != -1 && p1.y != -1) break;
  }

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (vs[i][j] == 'o') {
        p2.x = j;
        p2.y = i;
        vs[i][j] = '-';
        break;
      }
    }
    if (p2.x != -1 && p2.y != -1) break;
  }
  cout << abs(p1.x - p2.x) + abs(p1.y - p2.y) << endl;

  return 0;
}
