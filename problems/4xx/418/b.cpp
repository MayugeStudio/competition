#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();

  double ans = 0;

  for (double i=0; i<n; ++i) {
    for (double j=i+2; j<n; ++j) {
      double x = 0;
      for (int k=i; k<=j; ++k) {
        if (s[k] == 't') x += 1;
      }
      double ratio = (x-2)/(j-i+1-2);
      if (ans < ratio) ans = ratio;
    }

  }

  printf("%.10f", ans);

  return 0;
}
