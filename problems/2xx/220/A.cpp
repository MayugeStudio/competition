#include <iostream>
using namespace std;

int A, B, C;

int main() {
  cin >> A >> B >> C;

  for (int i=A; i<=B; ++i) {
    if (i%C == 0) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
