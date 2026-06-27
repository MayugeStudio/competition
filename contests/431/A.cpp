#include <iostream>
using namespace std;

int main() {
  int H; int B;
  cin >> H >> B;

  if (H > B) {
    cout << H - B << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}

