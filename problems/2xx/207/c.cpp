#include <iostream>
#include <vector>
using namespace std;
using ll = long long;


int main() {
  int n; cin >> n;
  vector<int> t(n), l(n), r(n);
  for (int i=0; i<n; ++i) {
    cin >> t[i] >> l[i] >> r[i];
    l[i] *=2 ; r[i] *= 2;
    if (t[i] == 1) {
      r[i]++;
    } else if (t[i] == 3) {
      l[i]++; r[i]++;
    } else if (t[i] == 4) {
      l[i]++;
    }
  }

  ll ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      int L = max(l[i], l[j]);
      int R = min(r[i], r[j]);

      if (L<R) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
