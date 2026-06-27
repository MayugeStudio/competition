#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }

  vector<int> b;
  b.push_back(0);
  b.push_back(360);

  int p = 0;
  for (int i=0; i<n; ++i) {
    p += a[i];
    p %= 360;
    b.push_back(p);
  }

  sort(b.begin(), b.end());
  ll ans = 0;
  for (int i=0; i<b.size()-1; ++i) {
    if (b[i+1] - b[i] > ans) ans = b[i+1] - b[i];
  }

  cout << ans << endl;

  return 0;
}
