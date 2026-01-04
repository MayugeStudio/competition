#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;

  ll s = 0;
  ll i = 1;
  while (s < n) {
    s += i;
    i++;
  }

  cout << i-1 << endl;

  return 0;
}
