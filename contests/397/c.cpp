#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  map<int, int> lhs, rhs;
  for (int i=0; i<n; ++i) {
    rhs[a[i]] += 1;
  }

  int ans = 0;

  for (int i=0; i<n; ++i) {
    lhs[a[i]] += 1;
    rhs[a[i]] -= 1;
    if (rhs[a[i]] <= 0) rhs.erase(a[i]);

    if (ans < lhs.size() + rhs.size()) ans = lhs.size() + rhs.size();
  }

  cout << ans << endl;

  return 0;
}
