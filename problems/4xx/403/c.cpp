#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n; int m; int q;
map<int, vector<bool>> users;
vector<int> users;

void solve() {
  int type; cin >> type;
  if (type == 1) {
    // grant user x single privilege
    int x, y; cin >> x >> y;
    users[x-1][y-1] = true;
  } else if (type == 2) {
    // grant user all privilege
    int x; cin >> x;
    fill(users[x-1].begin(), users[x-1].end(), true);
  } else if (type == 3) {
    // answer user x's privilege
    int x, y; cin >> x >> y;
    if (users[x-1][y-1]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}

int main() {
  cin >> n >> m >> q;
  for (int i=0; i<n; ++i) {
    users[i] = vector<bool>(m, false);
  }
  for (int i=0; i<q; ++i) {
    solve();
  }
  return 0;
}
