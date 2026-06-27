#include <iostream>
using namespace std;

int main() {
  string s, t; cin >> s >> t;

  int si = s.size();
  int ti = t.size();
  
  for (int i=0; i<si; ++i) {
    bool ok = true;
    for (int j=0; j<ti; ++j) {
      if (s[i+j] != t[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
