#include <iostream>
using namespace std;

int main() {
  int y; cin >> y;
  if ((y%4)==2) {
    cout << y << endl;
  } else if ((y%4) == 0) {
    cout << y + 2 << endl;
  } else {
    int rem = y%4;
    cout << y + rem << endl;
  }
  return 0;
}
