#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  for (int i=1; i<n; ++i) {
    int ans = 0;
    for (int k=0; k+i<n; ++k) {
      if (s[k] != s[k+i]) {
        ans++;
      } else {
        break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
