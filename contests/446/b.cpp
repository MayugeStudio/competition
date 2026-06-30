#include <vector>
#include <iostream>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> x(n);
  for (int i=0; i<n; ++i) {
    int l; cin >> l; x[i].resize(l);
    for (int j=0; j<l; ++j) cin >> x[i][j];
  }
  vector<bool> jce(m, false);

  for (int i=0; i<n; ++i) {
    bool ok = false;
    for (auto e : x[i]) {
      if (!jce[e-1]) {
        cout << e << endl;
        jce[e-1] = true;
        ok = true;
        break;
      }
    }
    if (!ok) cout << 0 << endl;
  }

  return 0;
}
