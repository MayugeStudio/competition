#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;

  if (a * 6 >= b && a <= b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
