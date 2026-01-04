#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  if (a == 0 || b == 0) {
    cout << 0 << endl;
  } else {
    cout << (b / 100) * a << endl;
  }
  return 0;
}
