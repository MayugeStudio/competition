#include <iostream>
using namespace std;

long long f(long long x) { return x * x + 2 * x + 3; }

int t;
int main() {
  cin >> t;
  cout << f(f(f(t) + t) + f(f(t))) << endl;
  return 0;
}
