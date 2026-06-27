#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n; int m; int q;
map<int, map<int, bool>> users;
map<int, bool> all;

void solve() {
  int type; cin >> type;
  if (type == 1) {
    // grant user x single privilege
    int x, y; cin >> x >> y;
    x--, y--;
    users[x][y] = true;
  } else if (type == 2) {
    // grant user all privilege
    int x; cin >> x;
    x--;
    all[x] = true;
  } else if (type == 3) {
    // answer user x's privilege
    int x, y; cin >> x >> y;
    x--, y--;
    if (all[x]) {
      cout << "Yes" << endl;
      return;
    }

    if (users[x][y]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}

int main() {
  cin >> n >> m >> q;
  for (int i=0; i<q; ++i) {
    solve();
  }
  return 0;
}
