#include <iostream>
using namespace std;

int n, r;

int main() {
  cin >> n >> r;
  int t = r;
  for (int i=0; i<n; ++i) {
    int d, a; cin >> d >> a;
    if (d == 1) {
      if (1600 <= t && t <= 2799) {
        t += a;
      }
    } else if (d == 2) {
      if (1200 <= t && t <= 2399) {
        t += a;
      }
    }
  }
  cout << t << endl;
  return 0;
}
