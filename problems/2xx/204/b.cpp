#include <iostream>
using namespace std;

int a[1010];
int main() {
  int n; cin >> n;
  for (int i=0; i<n; ++i) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n; ++i) {
    if (a[i] > 10) ans += a[i]-10;
  }

  cout << ans << endl;

  return 0;
}
