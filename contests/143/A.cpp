#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if (b * 2 < a) cout << a - b*2 << endl;
  else cout << 0 << endl;
  return 0;
}
