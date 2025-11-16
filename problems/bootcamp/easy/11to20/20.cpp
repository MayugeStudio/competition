#include <iostream>
#include <unordered_map>
using namespace std;

int f(int n) {
  if (n % 2 == 0) {
    return n/2;
  } else {
    return 3 * n + 1;
  }
}

int main() {
  int s; cin >> s;
  unordered_map<int, int> a;
  int m = 1;
  while (m<=1000000) {
    if (a[s] == 1) {
      cout << m << endl;
      return 0;
    }
    a[s]++;
    s = f(s);
    m++;
  }
  return 0;
}
