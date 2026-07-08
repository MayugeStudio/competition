#include <iostream>
#include <vector>
#include <set>
using namespace std;

using pll = pair<long long, long long>;

int main() {
  int n; cin >> n;
  vector<long long> xs(n), ys(n);
  set<pll> vs;
  for (int i=0; i<n; ++i) {
    cin >> xs[i] >> ys[i];
    vs.emplace(xs[i], ys[i]);
  }
  
  long long ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      pll p1 = {xs[i], ys[i]};
      pll p2 = {xs[j], ys[j]};
      if (p1.first < p2.first && p1.second < p2.second) {
        if (vs.count({p1.first, p2.second}) &&
            vs.count({p2.first, p1.second})) {
          ans += 1;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
