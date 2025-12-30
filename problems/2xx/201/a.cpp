#include <iostream>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  if  (c - b == b - a || 
       b - c == c - a ||
       c - a == a - b ||
       a - c == c - b ||
       b - a == a - c ||
       a - b == b - c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
