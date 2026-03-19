#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, l, r;
  string s;
  cin >> n >> l >> r;
  cin >> s;

  // alphabet dictionary
  vector<ll> d(26, 0);

  for (int i = l; i <= r; ++i) {
    d[(int)s[i] - 'a']++;
  }

  ll ans = 0;
  for (int i = 0; i < n; ++i) {
    // cout << s[i] << ":" << d[(int)s[i] - 'a'] << endl;
    ans += d[(int)s[i] - 'a'];

    // 尺取り法
    if (l + i < n) {
      d[(int)s[l + i] - 'a']--;
    }
    if (r + i + 1 < n) {
      d[(int)s[r + i + 1] - 'a']++;
    }
  }

  cout << ans << endl;

  return 0;
}
