#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;

  if (n >= pow(2, 31)) {
    cout << "No" << endl;
    return 0;
  }

  if (n < -1 * pow(2, 31)) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
