#include <iostream>
using namespace std;

void f(int n) {
  if (n == 1) {
    cout << 1 << " ";
    return;
  }
  f(n-1);
  cout << n << " ";
  f(n-1);
  return;
}

int n;
int main() {
  cin >> n;
  f(n);
  cout << endl;
  return 0;
}
