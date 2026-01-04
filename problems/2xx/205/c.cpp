#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;

  if (abs(a) == abs(b) && c%2 == 0) {
    cout << "=" << endl;
    return 0;
  }

  if (a > 0 && b > 0) {
    if (a > b) {
      cout << ">" << endl;
    } else {
      cout << "<" << endl;
    }
    return 0;
  }

  if (a < 0 && b > 0) {
    if (c%2 == 0) {
      if (-1 * a > b) {
        cout << ">" << endl;
      } else {
        cout << "<" << endl;
      }
    } else {
      cout << "<" << endl;
    }
    return 0;
  }

  if (a > 0 && b < 0) {
    if (c%2 == 0) {
      if (a > -1 * b) {
        cout << ">" << endl;
      } else {
        cout << "<" << endl;
      }
    } else {
      cout << ">" << endl;
    }
    return 0;
  }

  if (a < 0 && b < 0) {
    if (c%2 == 0) {
      if (a < b) {
        cout << ">" << endl;
      } else {
        cout << "<" << endl;
      }
    } else {
      if (a < b) {
        cout << "<" << endl;
      } else {
        cout << ">" << endl;
      }
    }
    return 0;
  }

  return 0;
}
