#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int x, y; cin >> x >> y;
  double cnt = 0;
  for (int i=1; i<=6; ++i) {
    for (int k=1; k<=6; ++k) {
      if (i+k >= x || abs(i-k) >= y) cnt++;    
    }
  }
  cout << setprecision(20) << cnt / 36 << endl;
  return 0;
}
