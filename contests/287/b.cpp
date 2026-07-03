#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<string> s(n);
  vector<string> t(m);
  for (int i=0; i<n; ++i) cin >> s[i];
  for (int i=0; i<m; ++i) cin >> t[i];

  int ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      bool ok = true;
      for (int k=0; k<3; ++k) {
        if (t[j][k] != s[i][3+k]) {
          ok = false;
        }
      }
      if (ok) {
        ans += 1;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
