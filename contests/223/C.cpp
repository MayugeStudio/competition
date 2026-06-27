#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
  int n; cin >> n;

  vector<double> a(n);
  vector<double> b(n);
  for (int i=0; i<n; ++i) cin >> a[i] >> b[i];

  double t = 0;
  for (int i=0; i<n; ++i) t += a[i] / b[i];

  t /= 2;

  double ans = 0;
  for (int i=0; i<n; ++i) {
    double nt = a[i] / b[i];
    if (nt > t) {
      ans += b[i] * t;
      break;
    }
    ans += a[i];
    t -= nt;
  }

  cout << fixed << setprecision(15);
  cout << ans << endl;

  return 0;
}

