#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int n;
using pss = pair<string, string>;

int main() {
  cin >> n;
  vector<string> s(n);
  vector<string> t(n);
  for (int i=0; i<n; ++i) {
    cin >> s[i];
    cin >> t[i];
  }

  for (int i=0; i<n; ++i) {
    bool l = true;
    bool r = true;
    for (int j=0; j<n; ++j) {
      if (i == j) continue;
      if (s[i] == s[j] || s[i] == t[j]) {
        l = false;
      }
      if (t[i] == s[j] || t[i] == t[j]) {
        r = false;
      }
    }
    if (!l && !r) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
