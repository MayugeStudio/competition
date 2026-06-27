#include <cmath>
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
  string s; cin >> s;
  ll n = s.size();

  ll ans = 0;
  long double double_zero_cnt = 0;
  for (int i=0; i<n-1; ++i) {
    if (s[i] == '0' && s[i+1] == '0') {
      double_zero_cnt++;
      s[i] = '_';
      s[i+1] = '_';
    }
  }

  for (int i=0; i<n; ++i) {
    if (s[i] != '_') ans++;
  }

  cout << ans + double_zero_cnt << endl;

  return 0;
}
