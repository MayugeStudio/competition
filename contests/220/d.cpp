#include <iostream>
#include <vector>

using namespace std;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  vector<mint> dp(10);
  dp[a[0]] = 1;
  for (int i=1; i<n; ++i) {
    int na = a[i];
    vector<mint> p(10);
    swap(p, dp);
    for (int j=0; j<10; ++j) {
      dp[(j+na)%10] += p[j];
      dp[(j*na)%10] += p[j];
    }
  }

  for (int i=0; i<10; ++i) {
    cout << dp[i].val() << endl;
  }

  return 0;
}
