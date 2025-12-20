#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
string s;
pair<int, int> p;
int main() {
  cin >> n >> s;

  p.first  = 0;
  p.second = 0;

  vector<vector<int>> dirs = {
    {1,  0},
    {0, -1},
    {-1, 0},
    {0,  1},
  };

  int d = 0;

  for (int i=0; i<n; ++i) {
    if (s[i] == 'S') {
      p.first += dirs[d][0];
      p.second += dirs[d][1];
    } else if (s[i] == 'R') {
      d += 1;
      d %= 4;
    }
  }
  cout << p.first << " " << p.second << endl;

  return 0;
}

