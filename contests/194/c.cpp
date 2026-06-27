#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  map<int, int> cnt;
  for (int i=0; i<n; ++i) { cin >> a[i]; }
  for (int i=0; i<n; ++i) cnt[a[i]] += 1;

  ll ans = 0;
  for (auto e1 : cnt) {
    for (auto e2 : cnt) {
      if (e1.first > e2.first) continue;
      else if (e1.first == e2.first) continue;
      else {
        ans += 1LL * (e1.first - e2.first) * (e1.first - e2.first) * e1.second * e2.second;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
