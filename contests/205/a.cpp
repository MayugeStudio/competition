#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b; cin >> a >> b;
  cout << setprecision(20);
  if (a == 0 || b == 0) {
    cout << 0 << endl;
  } else {
    cout << (b / 100) * a << endl;
  }
  return 0;
}
