#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string a;
  cin >> a;
  int n = a.size();

  int x = 0;
  for (int i=0; i<n; ++i) {
    if (a[i] == 'a') x++;
    else break;
  }

  int y = 0;
  for (int i=n-1; i>=0; --i) {
    if (a[i] == 'a') y++;
    else break;
  }

  if (x == n) {
    cout << "Yes" << endl;
    return 0;
  }
  if (x > y) {
    cout << "No" << endl;
    return 0;
  }
  for (int i=x; i<(n-y); i++) {
    if (a[i] != a[(n-1)-(y-x)-i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
