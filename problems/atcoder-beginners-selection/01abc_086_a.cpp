#include <iostream>
using namespace std;
int main() {
  int A; cin >> A;
  int B; cin >> B;

  if (A % 2 == 0 || B % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }

  return 0;
}
