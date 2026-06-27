#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
  int n, q; cin >> n >> q;
  string s; cin >> s;

  vector<int> sum(n, 0);
  for (int i=0; i+1 < n; ++i) {
    sum[i+1] = sum[i] + (s[i] == s[i+1]);
  }

  while (q--) {
    int l, r; cin >> l >> r;
    cout << sum[r-1] - sum[l-1] << endl;
  }
  return 0;
}
