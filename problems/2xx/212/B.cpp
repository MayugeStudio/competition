#include <iostream>
#include <string>
using namespace std;

#define weak "Weak"
#define strong "Strong"

string X;

int next(int n) {
  if (n == 9) return 0;
  return n+1;
}

int main() {
  cin >> X;
  int X1 = (int)(X[0] - '0');
  int X2 = (int)(X[1] - '0');
  int X3 = (int)(X[2] - '0');
  int X4 = (int)(X[3] - '0');

  if (X1 == X2 && X2 == X3 && X3 == X4) {
    cout << weak << endl;
    return 0;
  }
  
  if (next(X1) == X2 && next(X2) == X3 && next(X3) == X4) {
    cout << weak << endl;
    return 0;
  }
  cout << strong << endl;
  return 0;
}
