#include <iostream>
using namespace std;

int main() {
  double r, x, y;
  cin >> r >> x >> y;
  double d = sqrt(x*x + y*y);
  int ans = ceil(d / r);
  if (ans == 1 && d != r) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
