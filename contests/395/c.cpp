#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  map<int, vector<int>> m;

  // 先頭のやつを見つける
  vector<int> front(10, n+1);
  for (int j=0; j<n; ++j) {
    m[a[j]].push_back(j);
  }

  int ans = n+1;
  for (auto &[k, v] : m) {
    if (v.size() < 2) continue;
    for (int i=0; i<v.size()-1; ++i) {
      if (v[i+1] - v[i] + 1 < ans) ans = v[i+1] - v[i] + 1;
    }
  }
 
  if (ans == n+1) cout << -1 << endl;
  else cout << ans << endl;

  return 0;
}
