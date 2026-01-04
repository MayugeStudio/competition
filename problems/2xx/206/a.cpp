#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n; cin >> n;
  int f = floor(1.08 * n);

  if (f < 206) cout << "Yay!" << endl;
  else if (f == 206) cout << "so-so" << endl;
  else cout << ":(" << endl;

  return 0;
}
