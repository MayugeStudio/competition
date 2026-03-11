#include <iostream>
#include <vector>

using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int> c(m);
  for (int i=0; i<m; ++i) cin >> c[i];

  vector<int> a(n), b(n);
  for (int i=0; i<n; ++i) cin >> a[i] >> b[i];
  for (int i=0; i<n; ++i) a[i]--;

  int ans = 0;

  for (int i=0; i<n; ++i) {
    if (c[a[i]] >= b[i]) {
      ans += b[i];
      c[a[i]] -= b[i];
    } else {
      ans += c[a[i]];
      c[a[i]] = 0;
    }
  }

  cout << ans << endl;


  return 0;
}
