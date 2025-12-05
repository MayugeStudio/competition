#include <iostream>
using namespace std;
int a, b;
int main() {
  cin >> a >> b;
  if (a < 10 && b < 10) cout << a * b << endl;
  else cout << -1 << endl;
  return 0;
}
