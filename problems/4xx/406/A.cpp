#include <iostream>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (C == A) {
    if (D > B) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else if (C > A) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}

