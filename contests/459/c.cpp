#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
  int n; cin >> n;
  int q; cin >> q;
  vector<int> a(n, 0);
  vector<int> b(q, 0);

  int k = 0;

  for (int i=0; i<q; ++i) {
    int t; cin >> t;
    if (t == 1) {
      int x; cin >> x; x--;
      a[x] += 1;
      b[a[x]] += 1;
      if (b[a[x]] == n) {
        k = a[x];
      }
    } else {
      int y; cin >> y;
      if (k+y > q) {
        cout << 0 << endl;
      } else {
        cout << b[k+y] << endl;
      }
    }

  }

  return 0;
}
