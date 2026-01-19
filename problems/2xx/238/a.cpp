#include <iostream>
#include <cmath>

using ll = long long;
using namespace std;

int main() {
  ll n; cin >> n;
  if (pow(2, n) > pow(n, 2)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
