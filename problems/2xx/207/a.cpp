#include <algorithm>
#include <iostream>
using namespace std;

int a[3];

int main() {
  cin >> a[0] >> a[1] >> a[2];

  sort(begin(a), end(a));

  cout << a[1] + a[2] << endl;
  return 0;
}
