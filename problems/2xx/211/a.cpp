#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a, b; cin >> a >> b;
  cout << setprecision(8) << (a - b)/3 + b << endl;
  return 0;
}

