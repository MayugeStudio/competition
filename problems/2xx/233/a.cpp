#include <iostream>
using namespace std;

int main() {
  int x, y; cin >> x >> y;

  int ans = 0;
  while (x+10*ans < y) ans++;

  cout << ans << endl;

  return 0;
}
