#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
using namespace std;

int X1, Y1, X2, Y2;
int main() {
  cin >> X1 >> Y1 >> X2 >> Y2;

  vector<pair<int, int>> dirs = {
    {1, 2},
    {2, 1},
    {1, -2},
    {2, -1},
    {-1, 2},
    {-2, 1},
    {-1, -2},
    {-2, -1},
  };
  
  for (auto [dx1, dy1]: dirs) {
    for (auto [dx2, dy2]: dirs) {
      if ((X1 + dx1 + dx2 == X2) && (Y1 + dy1 + dy2 == Y2)) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}
