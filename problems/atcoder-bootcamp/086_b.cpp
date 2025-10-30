#include <iostream>
using namespace std;

int main() {
  int A; cin >> A;
  int B; cin >> B;

  int s = A;

  int temp = B;

  int keta = 0;
  while (temp != 0) {
    temp /= 10;
    keta++;
  }
  for (int i=0; i<keta; ++i) {
    s *= 10;
  }
  s += B;

  for (int i=1; i<=10000; ++i) {
    if (s == i*i) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}

