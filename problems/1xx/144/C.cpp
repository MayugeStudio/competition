#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll n;

int main() {
  cin >> n;

  ll res = n + 1 - 2;
  for (ll a = 1; a * a <= n; ++a) {
    if (n % a == 0) res = min(res, a + n/a - 2);
  }

  cout << res << endl;

  return 0;
}
