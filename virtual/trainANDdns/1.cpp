#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 0;
  for (int i=1; i<=n; ++i) {
    if (n - i > n/2) { ans += 1;}
  }
  cout << ans << endl;
  return 0;
}
