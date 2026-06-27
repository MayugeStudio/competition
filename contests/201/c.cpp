#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s; cin >> s;
  int ans = 0;

  for (int i=0; i<=9999; ++i) {
    vector<bool> flag(10);
    int x = i;
    for (int j=0; j<4; ++j) {
      flag[x%10] = true;
      x /= 10;
    }

    bool flag2 = true;
    for (int j=0; j<10; ++j) {
      if (s[j] == 'o' && !flag[j]) flag2 = false;
      if (s[j] == 'x' && flag[j]) flag2 = false;
    }
    if (flag2) ans++;
  }
  cout << ans << endl;

  return 0;
}
