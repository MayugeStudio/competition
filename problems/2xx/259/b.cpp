#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14159265359;

double length(double a, double b) {
  return sqrt(a*a + b*b);
}

int main() {
  double a, b, d; cin >> a >> b >> d;
  double theta = atan2(b, a);
  double d_rad = d*pi/180;

  double h = length(a, b);
  double a_n = cos(theta + d_rad);
  double b_n = sin(theta + d_rad);

  cout << setprecision(10);
  cout << h*a_n << " " << h*b_n << endl;

  return 0;
}
