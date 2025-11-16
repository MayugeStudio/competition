#include <iostream>
using namespace std;

int A, B, C;
int main() {
  cin >> A >> B >> C;

  for (int i=9; i>=1; --i) {
    if (A == i) cout << A;
    if (B == i) cout << B;
    if (C == i) cout << C;
  }
  cout << endl;

  return 0;
}

