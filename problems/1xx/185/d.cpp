#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  if (m == 0) {
    cout << "1" << endl;
    return 0;
  }
  vector<int> a(m);
  for (int i=0; i<m; ++i) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  if (a.front() != 1) {
    a.push_back(0);
  }
  if (a.back() != n) {
    a.push_back(n+1);
  }
  sort(a.begin(), a.end());
  
  int k = n;

  vector<int> b;
  for (int i=0; i<a.size()-1; ++i) {
    int d = a[i+1] - a[i] - 1;
    // cout << d << endl;
    if (d <= 0) continue;
    if (d < k) k = d;
    // cout << a[i+1] << "-"<< a[i] << "-1=" << d << endl;
    b.push_back(d);
  }
  // cout << k << endl;

  int ans = 0;
  for (int i=0; i<b.size(); ++i) {
    int x = (b[i]+k-1)/k;
    // cout << x << endl;
    ans += x;
  }
  // cout << "----" << endl;
  // cout << k << endl;
  cout << ans << endl;

  return 0;
}
