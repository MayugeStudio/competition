#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll factorial(ll n) {
  if (n == 0) return 1;
  return n * factorial(n-1);
}

int main() {
  ll n; cin >> n;

  vector<ll> v(10);
  for (int i=0; i<10; ++i) v[i] = factorial(10-i);

  ll ans = 0;

  for (int i=0; i<10; ++i) {
    for (int c=100; c>0; --c) {
      if (v[i]*c <= n) {
        n -= v[i]*c;
        ans += c;
        break;
      }
    }
  }

  cout << ans << endl;
  

  return 0;
}
