#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  int q; cin >> q;

  for (int i=0; i<q; ++i) {
    int t; cin >> t;
    if (t == 1) {
      int k, x; cin >> k >> x;
      k--;
      a[k] = x;
    } else {
      int k; cin >> k;
      k--;
      cout << a[k] << endl;
    }
  }

  return 0;
}
