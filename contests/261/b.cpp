#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> t(n);

  for (int i=0; i<n; ++i) cin >> t[i];

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (t[i][j] == t[j][i] && t[i][j] == 'W') {
        cout << "incorrect" << endl;
        return 0;
      }
      if (t[i][j] == t[j][i] && t[i][j] == 'L') {
        cout << "incorrect" << endl;
        return 0;
      }
      if (t[i][j] != t[j][i] && (t[i][j] == 'D' || t[j][i] == 'D')) {
        cout << "incorrect" << endl;
        return 0;
      }
    }
  }
  cout << "correct" << endl;

  return 0;
}
