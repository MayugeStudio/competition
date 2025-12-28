#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;

  int n = s.size();

  for (int i=n-1; i>0; --i) {
    if (s.substr(i-1, 2) == "WA") {
      s[i-1] = 'A';
      s[i] = 'C';
    }
  }
  cout << s << endl;

  return 0;
}
