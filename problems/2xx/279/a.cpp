#include <iostream>
#include <string>
using namespace std;

int main() {
  int ans = 0;
  string s; cin >> s;

  for (int i=0; i<s.size(); ++i) {
    if (s[i] == 'v') {
      ans += 1;
    } else if (s[i] == 'w') {
      ans += 2;
    }
  }
  cout << ans << endl;
  return 0;
}
