#include <iostream>
using namespace std;

int X, Y, Z;

int main() {
  cin >> X >> Y >> Z;

  while (X > Y * Z) {
    X ++;
    Y ++;
  }
  if (X == Y * Z) {
    cout << "Yes" << endl;
  } else cout << "No" << endl;

  return 0;
}
