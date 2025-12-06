#include <iostream>
using namespace std;

int n;
int a[50];

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> a[i];

  int ans = 0;
  for (int l=0; l<n; ++l) {
    for (int r=l; r<n; ++r) {
      int s = 0;
      // Compute sum of a[]
      for (int i=l; i<=r; ++i) s += a[i];

      bool ok = true;
      for (int i=l; i<=r; ++i) {
        if (s % a[i] == 0) {
          ok = false;
          break;
        }
      }

      if (ok) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
