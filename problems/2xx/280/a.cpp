#include <iostream>
using namespace std;

int main() {
  int h, w; cin >> h >> w;

  int ans = 0;
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      char t; cin >> t;
      if (t == '#') ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
