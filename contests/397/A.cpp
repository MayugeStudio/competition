#include <iostream>
using namespace std;

float X;

int main() {
  cin >> X;
  if (X >= 38) cout << 1;
  else if (X >= 37.5) cout << 2;
  else cout << 3;
  cout << endl;
  return 0;
}
