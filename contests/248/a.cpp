#include <iostream>
#include <string>
using namespace std;

string s;
int main() {
  cin >> s;
  for (int i=0; i<=9; ++i) {
    char c = '0'+i;
    bool found = false;
    for (int j=0; j<9; ++j) {
      if (s[j] == c) {
        found = true;
      }
    }

    if (!found) {
      cout << c << endl;
      return 0;
    }

  }
  return 0;
}
