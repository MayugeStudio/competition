#include <iostream>
using namespace std;
int main() {
  int n; cin >> n;
  string s; cin >> s;
  string t;
  for (int i=0; i<n; ++i) {
    if (i == n-1) {
      t += s[i];
      continue;
    }
    if (s[i] == 'n' && s[i+1] == 'a') {
      t += "nya";
      i += 1;
    } else {
      t += s[i];
    }
  }
  cout << t << endl;
  return 0;
}
