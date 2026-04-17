#include <iostream>
#include <vector>
using namespace std;
int main () {
  int n, m; cin >> n >> m;
  vector<vector<int>> s(m);
  for (int i=0; i<m; ++i) {
    int k; cin >> k;
    s[i].resize(k);
    for (int j=0; j<k; ++j) {
      cin >> s[i][j];
      s[i][j]--;
    }
  }
  
  vector<int> q(m);
  for (int i=0; i<m; ++i) cin >> q[i];

  int ans = 0;
  for (int bit=0; bit<(1<<n); ++bit) {

    bool ok = true;
    // Each light
    for (int j=0; j<m; ++j) {
      int on = 0;
      for (auto v: s[j]) {
        if (bit & (1<<v)) on++;
      }
      if (on%2 != q[j]) ok = false;
    }
    if (ok) ans++;
  }
  cout << ans << endl;

  return 0;
}
