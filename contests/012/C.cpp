#include <iostream>
using namespace std;

int N;
int main() {
  cin >> N;

  int diff = 2025 - N;

  for (int x=1; x<=9; ++x) {
    for (int y=1; y<=9; ++y) {
      if (x * y == diff) {
        cout << x << " x " << y << endl;
      }
    }
  }

  return 0;
}

