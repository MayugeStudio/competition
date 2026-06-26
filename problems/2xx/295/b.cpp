#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int dist(int r1, int c1, int r2, int c2) {
  return abs(r1 - r2) + abs(c1 - c2);
}

int main() {
  int r, c; cin >> r >> c;
  vector<vector<char>> tbl(r, vector<char>(c));
  for (int i=0; i<r; ++i) {
    for (int j=0; j<c; ++j) {
      cin >> tbl[i][j];
    }
  }
  for (int i=0; i<r; ++i) {
    for (int j=0; j<c; ++j) {
      if (tbl[i][j] != '.' && tbl[i][j] != '#') {
        int power = tbl[i][j] - '0';
        for (int y=0; y<r; ++y) {
          for (int x=0; x<c; ++x) {
            if (dist(y, x, i, j) <= power && tbl[y][x] == '#') {
              tbl[y][x] = '.';
            }
          }
        }
        tbl[i][j] = '.';
      }
    }
  }
  for (int i=0; i<r; ++i) {
    for (int j=0; j<c; ++j) {
      cout << tbl[i][j];
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}
