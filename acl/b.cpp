#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll a, b, c, d; cin >> a >> b >> c >> d;
  if (b < c) {
    cout << "No" << endl;
  } else if (d < a) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}

