#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  int table[26] = {0};
  
  for (int i=0; i<s.size(); ++i) {
    table[s[i]-'a']++; 
  }

  for (int i=0; i<26; ++i) {
    if (table[i] == 1) {
      cout << (char)('a' + i) << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}
