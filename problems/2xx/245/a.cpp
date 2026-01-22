#include <iostream>
using namespace std;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (a < c) {
    cout << "Takahashi" << endl;
  }
  if (a == c) {
    if (b < d) {
      cout << "Takahashi" << endl;
    }
    if (b == d) {
      cout << "Takahashi" << endl;
    }
    if (b > d) {
      cout << "Aoki" << endl;
    }
    return 0;
  }
  if (a > c) {
    cout << "Aoki" << endl;
    return 0;
  }
  return 0;
}
