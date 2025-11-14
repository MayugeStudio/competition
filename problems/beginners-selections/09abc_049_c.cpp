#include <iostream>
#include <algorithm>
using namespace std;

string S;
string T[4] = { "dream", "eraser", "erase", "dreamer" };
int main() {
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i=0; i<4; ++i) reverse(T[i].begin(), T[i].end());

  bool can = true;
  for (int i=0; i<S.size();) {
    bool can2 = false;
    for (int j=0; j<4; ++j) {
      string t = T[j];
      if (S.substr(i, t.size()) == t) {
        can2 = true;
        i += t.size();
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}

