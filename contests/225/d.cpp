#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct train {
  int front;
  int back;
  int root;
  int idx;
};

int main() {
  int n, q; cin >> n >> q;
  const int NONE = -1;

  vector<train> tr;
  for (int i=0; i<n; ++i) {
    tr.push_back(train{-1, -1, i, i});
  }

  while (q--) {
    int t; cin >> t;
    if (t == 1) {
      int x, y; cin >> x >> y; x--, y--;
      tr[x].back = y;
      tr[y].front = x;
    } else if (t == 2) {
      int x, y; cin >> x >> y; x--, y--;
      tr[x].back = -1;
      tr[y].front = -1;

    } else if (t == 3) {
      int x; cin >> x; x--;
      int s = x;
      while (tr[s].front != -1) s = tr[s].front;

      string ans = "";
      int cnt = 0;
      for (int i = s; i != -1; i = tr[i].back) {
        ans += to_string(i+1);
        ans += " ";
        cnt += 1;
      }
      cout << cnt << " " << ans << '\n';
    }
  }
  return 0;
}
