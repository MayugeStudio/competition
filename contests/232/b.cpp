#include <iostream>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  int n = s.size();

  for (int i=0; i<28; ++i) {
    for (int j=0; j<n; ++j) {
      s[j]++;
      if (s[j] > 'z') s[j] = 'a';
    }
    
    if (s == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
