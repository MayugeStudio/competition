#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  s[0] = s[0] ^ 0b00100000;
  cout << "Of" << s << endl;
  return 0;
}
