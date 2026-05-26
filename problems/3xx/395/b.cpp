#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<char>> m(n, vector<char>(n, ' '));
  for(int i=0; i<n; ++i) {
    int j = n - i;
    if (i <= j) {
      char c = '#';
      if (i%2 == 1) {
        c = '.';
      }
      for (int y=i; y<j; ++y) {
        for (int x=i; x<j; ++x) {
          m[y][x] = c;
        }
      }
    }
  }
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      cout << m[i][j];
    }
    cout << endl;
  }
  return 0;
}
