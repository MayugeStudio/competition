#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int t, x; cin >> t >> x;
  vector<int> a(t+1);
  for (int i=0; i<=t; ++i) cin >> a[i];

  vector<pair<int, int>> ans;
  cout << 0 << " " << a[0] << endl;

  int cur = a[0];

  for (int i=0; i<=t; ++i) {
    if (abs(cur - a[i]) >= x) {
      cout << i << " " << a[i] << endl;
      cur = a[i];
    }
  }


  return 0;
}
