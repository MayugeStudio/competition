#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b; cin >> a >> b;

  
  cout << setprecision(10);

  printf("%.03lf", round(b / a * 1000.0) / 1000.0);

  return 0;
}
