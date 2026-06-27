#include <iostream>
using namespace std;

int A, B, C;

int main() {
  cin >> A >> B >> C;
  if (A == B && B == C) {
    cout << "Yes" << endl;
  } else if (A + B == C) {
    cout << "Yes" << endl;
  } else if (A + C == B) {
    cout << "Yes" << endl;
  } else if (B + C == A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
