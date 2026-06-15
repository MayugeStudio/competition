#include <iostream>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> m;
  
  for (int i=0; i<n; ++i) {
    string s; cin >> s;
    if (s.front() == '!') {
      s.erase(0, 1);
      m[s] |= 0b01;
    } else {
      m[s] |= 0b10;
    }
  }
  for (auto e: m) {
    if (e.second == 0b11) {
      cout << e.first << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}
