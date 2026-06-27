#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int sunuke = 0;
  if (a >= 4 || b >= 4) {
    a %= 4; b %= 4;
    sunuke += 4;
  }
  if (a >= 2 || b >= 2) {
    a %= 2; b %= 2;
    sunuke += 2;

  }
  if (a >= 1 || b >= 1) {
    sunuke += 1;
  }
  cout << sunuke << endl;
  return 0;
}
