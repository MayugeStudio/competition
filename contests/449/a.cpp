#include <iomanip>
#include <iostream>
using namespace std;

const double PI = 3.1415926535897932384626433832795028841971;

int main() {
  double d;
  cin >> d;
  cout << setprecision(20);
  cout << (d / 2) * (d / 2) * PI << endl;
  return 0;
}
