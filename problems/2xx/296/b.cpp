#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
  string s[8];
  for (int i=0; i<8; ++i) cin >> s[i];
  string table = "abcdefgh";
  for (int i=0; i<8; ++i) {
    for (int j=0; j<8; ++j) {
      if (s[i][j] == '.') continue;
      cout << table[j];
      cout << 8 - i;
      cout << endl;
      return 0;
    }
  }
  return 0;
}
