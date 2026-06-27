#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll pow(ll x, ll y) {
  if (y == 1) return x;
  return x * x;
}

int main() {
  ll a, b, c; cin >> a >> b >> c;

  if (c%2 == 0) c = 2;
  else c = 1;

  if (pow(a, c) == pow(b, c)) cout << "=" << endl;
  else if (pow(a, c) > pow(b, c)) cout << ">" << endl;
  else cout << "<" << endl;

  return 0;
}
