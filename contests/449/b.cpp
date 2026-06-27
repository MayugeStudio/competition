#include <iostream>
#include <vector>

using namespace std;

int main() {
  int h, w, q;
  cin >> h >> w >> q;

  for (int i = 0; i < q; ++i) {
    int t;
    cin >> t;
    if (t == 1) {
      int r;
      cin >> r;
      cout << r * w << endl;
      h -= r;
    } else {
      int c;
      cin >> c;
      cout << c * h << endl;
      w -= c;
    }
  }

  return 0;
}
