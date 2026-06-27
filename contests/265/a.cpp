#include <iostream>
using namespace std;

int main() {
  int x, y, n; cin >> x >> y >> n;
  int xnum = n%3;
  int ynum = n/3;
  int ans = 1000000;
  while (ynum >= 0) {
    int sum = xnum*x +ynum*y;
    if (sum < ans) {
      ans = sum;
    }
    ynum -= 1;
    xnum += 3;
  }
  cout << ans << endl;
  return 0;
}
