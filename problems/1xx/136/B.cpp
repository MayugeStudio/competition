#include <iostream>
using namespace std;

#define ll long long

ll n;

int main() {
  cin >> n;
  ll ans = 0;

  for (int i=1; i<=n; ++i) {
    string s = to_string(i);
    if (s.size() % 2 == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
