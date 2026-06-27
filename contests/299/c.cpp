#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  string s; cin >> s;

  ll ans = -1;
  ll cnt = 0;
  for (int i=0; i<n; ++i) {
    if (s[i] == 'o') {
      cnt++;
      ans = max(ans, cnt);
    } else {
      cnt = 0;
    }
  }

  if (ans == n) ans = -1;
  cout << ans << endl;

  return 0;
}
