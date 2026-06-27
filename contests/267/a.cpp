#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;cin >> s;
  map<string, int> m;
  m["Monday"] = 5;
  m["Tuesday"] = 4;
  m["Wednesday"] = 3;
  m["Thursday"] = 2;
  m["Friday"] = 1;
  cout << m[s] << endl;
  return 0;
}
