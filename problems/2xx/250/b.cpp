#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, a, b; cin >> n >> a >> b;
  vector<vector<char>> tiles(n, vector<char>(n));

  for (int i=0; i<n; ++i) {
    if (i%2 == 0) {
      for (int j=0; j<n; ++j) {
        if (j%2 == 0) tiles[i][j] = '.';
        else tiles[i][j] = '#';
      }
    } else {
      for (int j=0; j<n; ++j) {
        if (j%2 == 0) tiles[i][j] = '#';
        else tiles[i][j] = '.';
      }
    }
  }

  vector<vector<char>> x(a*n, vector<char>(b*n));
  for (int i=0; i<a*n; ++i) {
    for (int j=0; j<b*n; ++j) {
      x[i][j] = tiles[i/a][j/b];
    }
  }

  for (int i=0; i<a*n; ++i) {
    for (int j=0; j<b*n; ++j) {
      cout << x[i][j];
    }
    cout << '\n';
  }
  cout << '\n';

  return 0;
}
