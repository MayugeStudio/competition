#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;


  bool is_in = false;

  for (int i=0; i<n; ++i) {
    if (s[i] == '"') {
      is_in = !is_in;
      continue;
    }

    if (s[i] == ',' && !is_in) s[i] = '.';
  }
  cout << s << endl;
}
