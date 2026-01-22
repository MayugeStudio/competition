#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c, x; cin >> a >> b >> c >> x;

  cout << setprecision(10) << endl;

  if (x <= a) {
    cout << 1 << endl;
    return 0;
  }
  if (x <= b) {
    cout << c/(b - a) << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}
