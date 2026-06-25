#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  set<pair<int, int>> s;

  for (int i=0; i<n; ++i) {
    cin >> x[i] >> y[i];
  }

  for (int i=0; i<n; ++i) {
    s.emplace(x[i], y[i]);
  }

  int ans = 0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      int xi = x[i], xj = x[j];
      int yi = y[i], yj = y[j];
      if (xi < xj && yi < yj) { // 
        if (s.find({xi, yi}) == s.end()) continue;
        if (s.find({xj, yj}) == s.end()) continue;
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
