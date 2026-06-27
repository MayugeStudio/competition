#include <iostream>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  if (a - b == 0) {
    cout << c << endl;
  } else if (b - c == 0) {
    cout << a << endl;
  } else if (c - a == 0) {
    cout << b << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}

