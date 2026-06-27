#include <iostream>
#include <string>
using namespace std;

int main() {
  string v;
  string s; cin >> s;
  for (int i=0; i<s.size(); i++) {
    switch(s[i]) {
      case '0':
        v.push_back(s[i]);
        break;
      case '1':
        v.push_back(s[i]);
        break;
      case 'B':
        if (!v.empty()) v.pop_back();
        break;
    }
  }
  cout << v << endl;
  return 0;
}
