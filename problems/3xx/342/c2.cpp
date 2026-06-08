#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;

  vector<int> converted(26);
  for (int i=0; i<26; ++i) converted[i] = i;
  for (int i=0; i<q; ++i) {
    char c, d; cin >> c >> d;
    c -= 'a';
    d -= 'a';
    for (int j=0; j<26; ++j) {
      if (converted[j] == c) {
        converted[j] = d;
      }
    }
  }

  for (auto &c: s) {
    c = (char)(converted[c-'a']+'a');
  }
  cout << s << endl;

  return 0;
}
