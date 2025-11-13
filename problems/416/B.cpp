#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;
  string T = S;

  bool sharp = true;
  int dot = 0;
  for (int i=0; i<S.length(); ++i) {
    if (S[i] == '.') dot++;
    if (S[i] == '.' && sharp) {
      T[i] = 'o';
      sharp = false;
      continue;
    }
    if (S[i] == '#' && !sharp) {
      sharp = true;
      continue;
    }
  }
  if (dot == S.length()) {
    S[0] = 'o';
    cout << S;
    return 0;
  }

  cout << T << endl;

  return 0;
}
