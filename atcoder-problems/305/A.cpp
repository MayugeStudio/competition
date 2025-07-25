#include <iostream>
#include <math.h>

using namespace std;

int N;

int main() {
  cin >> N;

  int s = 0;
  while (s <= 100) {
    if (abs(N - s) <= 2) {
      cout << s << endl;
      return 0;
    }
    s += 5;
  }

  return 0;
}

