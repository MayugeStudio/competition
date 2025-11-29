#include <iostream>
using namespace std;

int W, B;

int main() {
  cin >> W >> B;
  W *= 1000;
  int ans = 0;
  while (ans * B <= W) ans++;
  cout << ans << endl;
  return 0;
}
