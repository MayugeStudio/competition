#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll L; cin >> L;
  ll ans = 1;
  for (int i=1; i<=11; ++i) {
    ans *= (L-i);
    ans /= i;
  }
  cout << ans << endl;
}
