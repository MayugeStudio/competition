#include <iostream>
#include <vector>
using namespace std;


int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<int> rows(h);
  vector<int> cols(w);

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) cin >> a[i][j];
  }

  for (int r=0; r<h; ++r) {
    for (int c=0; c<w; ++c) rows[r] += a[r][c];
  }
  
  for (int c=0; c<w; ++c) {
    for (int r=0; r<h; ++r) cols[c] += a[r][c];
  }


  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      int s = 0;
      s += rows[i];
      s += cols[j];

      // Subtract a[i][j] from `s`
      s -= a[i][j];

      cout << s << " ";
    }
    cout << endl;
  }


  return 0;
}

