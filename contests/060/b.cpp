#include <iostream>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  // (sum % b) == c
  // sum == B*t+2
  // 8 % 3 == 2
  // 3*t == 8-2
  for (int i=a; i<a*b;i+=a) {
    if (i%b == c) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
