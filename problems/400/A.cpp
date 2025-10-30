#include <iostream>

using namespace std;

int A;

int main() {
  cin >> A;
  if (400 % A != 0) {
    cout << -1 << endl;
    return 0;
  }
  cout << 400 / A << endl;
  return 0;
}
