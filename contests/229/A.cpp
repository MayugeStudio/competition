#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int cnt = 0;
  for (int i=0; i<2; ++i) {
    if (s1[i] == '#') cnt++;
  }
  if (cnt == 2) {
    cout << "Yes" << endl;
    return 0;
  }

  cnt = 0;
  for (int i=0; i<2; ++i) {
    if (s2[i] == '#') cnt++;
  }

  if (cnt == 2) {
    cout << "Yes" << endl;
    return 0;
  }

  if (s1[0] == s2[0] && s1[0] == '#') {
    cout << "Yes" << endl;
    return 0;
  }
  if (s1[1] == s2[1] && s1[1] == '#') {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  return 0;
}
