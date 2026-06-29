#include <iostream>
using namespace std;

int main() {
  int h1, m1, h2, m2, k; cin >> h1 >> m1 >> h2 >> m2 >> k;
  int dh = h2 - h1;
  if (dh < 0) dh += 24;
  int dm = m2 - m1;
  int ans = dm;
  ans += dh*60;
  cout << ans - k << endl;
  return 0;
}
