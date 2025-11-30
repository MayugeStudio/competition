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
    ans += min(a[i], t * b[i]);
    if (t > 0) t -= a[i]/b[i];
  }

  cout << fixed << setprecision(15);
  cout << ans << endl;

  return 0;
}

