#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, m; cin >> n >> m;

  vector<string> s(n);
  for (int i=0; i<n; ++i) cin >> s[i];

  vector<bool> table(m);
  int ans = 0;
  for (int i=0; i<n; ++i) {

    string s1 = s[i];

    for (int j=i+1; j<n; ++j) {

      fill(table.begin(), table.end(), false);
      string s2 = s[j];
      for (int c=0; c<m; ++c) {
        if (s1[c] == 'o') table[c] = true;
        if (s2[c] == 'o') table[c] = true;
      }

      if (count(table.begin(), table.end(), true) == table.size()) {
        ans++;
      }

    }

  }
  cout << ans << endl;

  return 0;
}
