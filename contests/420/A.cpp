#include <iostream>
using namespace std;

int X, Y;

int main() {
  cin >> X >> Y;
  if (X + Y > 12) cout << X + Y - 12 << endl;
  else cout << X + Y << endl;
  return 0;
}
