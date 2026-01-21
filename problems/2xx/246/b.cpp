#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a, b; cin >> a >> b;
  double t = sqrt(a*a + b*b);
  cout << setprecision(10) << endl;
  cout << a / t << " " << b / t << endl;
  return 0;
}

