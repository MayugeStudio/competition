#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float h;
int main() {
  cin >> h;
  float ans = sqrt(h*(12800000+h));
  cout << setprecision(10) << ans << endl;
  return 0;
}
