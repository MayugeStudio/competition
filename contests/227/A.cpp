#include <iostream>
using namespace std;

int n, k, a;
int main() {
  cin >> n >> k >> a;
  int ans = (a + k - 1) % n;
  if (ans == 0) ans = n;

  cout << ans << endl;

  return 0;
}
