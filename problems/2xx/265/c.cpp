#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;
using pii = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<string> g(h);
  for (int i=0; i<h; ++i) {
    cin >> g[i];
  }
  set<pii> m;

  pii current = make_pair(0, 0);

  while (!m.count(current)) {
    m.insert(current);
    switch (g[current.first][current.second]) {
    case 'U': {
      if (current.first == 0) {
        cout << current.first+1 << " " << current.second+1 << endl;
        return 0;
      }
      current.first -= 1;
      break;
      }
    case 'D': {
      if (current.first == h-1) {
        cout << current.first+1 << " " << current.second+1 << endl;
        return 0;
      }
      current.first += 1;
      break;
      }
    case 'L': {
      if (current.second == 0) {
        cout << current.first+1 << " " << current.second+1 << endl;
        return 0;
      }
      current.second -= 1;
      break;
      }
    case 'R': {
      if (current.second == w-1) {
        cout << current.first+1 << " " << current.second+1 << endl;
        return 0;
      }
      current.second += 1;
      break;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}
