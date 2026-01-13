#include <iostream>
using namespace std;

int main() {
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  int ans = 0;
  if (n > a) {
    ans += a * x + (n-a) * y;
  } else {
    ans += n * x;
  }
  cout << ans << endl;
  return 0; 
}
