#include <iostream>
#include <vector>
using namespace std;

int ydirs[4] = {-1, 0,  1, 0};
int xdirs[4] = { 0, -1, 0, 1};
int main() {
  int h, w; cin >> h >> w;
  int r, c; cin >> r >> c;
  r--; c--;

  vector<vector<int>> v(h, vector<int>(w));

  int ans = 0;
  for (int d=0; d<4; ++d) {
    int nr = r+ydirs[d];
    int nc = c+xdirs[d];
    if (nr>=h || nr<0) continue;
    if (nc>=w || nc<0) continue;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
