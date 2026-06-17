#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int cnt = 0;
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == 'R') cnt += 1;
  }

  int ans = 0;
  for (int i=0; i<cnt; ++i) {
    if (s[i] == 'W') ans += 1;
  }

  cout << ans << endl;
  return 0;
}
