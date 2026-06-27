#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  string ans;
  for (int i=0; i<n; ++i) {
    if (i%2 == 0 && s[i] == '1') {
      ans = "Takahashi";
      break;
    }
    if (i%2 == 1 && s[i] == '1') {
      ans = "Aoki";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
