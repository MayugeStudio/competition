#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a(10);
  int n = 10;
  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i=0; i<3; ++i) ans = a[ans];
  cout << ans << endl;
  return 0;
}
