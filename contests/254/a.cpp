#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int d1 = n%10;
  n /= 10;
  int d10 = n%10;
  cout << d10 << d1 << endl;
  return 0;
}
