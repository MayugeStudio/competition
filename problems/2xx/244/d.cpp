#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, t;
  for (int i=0; i<3; ++i) {
    char c; cin >> c;
    s += c;
  }
  for (int i=0; i<3; ++i) {
    char c; cin >> c;
    t += c;
  }

  int cnt = 0;
  for (int i=0; i<3; ++i) {
    if (s[i] == t[i]) cnt++;
  }

  if (cnt == 1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }


  return 0;
}
