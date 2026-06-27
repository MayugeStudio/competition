#include <iostream>
using namespace std;

int main() {
  int k; cin >> k;
  int h = 21;
  int m = 0;
  h += (k/60);
  h %= 24;
  m += k%60;
  printf("%02d:%02d\n", h, m);
  return 0;
}
