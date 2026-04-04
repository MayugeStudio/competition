#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i=0; i<n; ++i) cin >> a[i] >> b[i];
  int m; cin >> m;
  vector<string> s(m);
  for (int i=0; i<m; ++i) cin >> s[i];

  vector<set<char>> dict(n);

  for (int i=0; i<n; ++i) {
    int len = a[i];
    int idx = b[i]-1; // 0-indexed

    for (int j=0; j<m; ++j) {
      if (s[j].size() == len) {
        dict[i].insert(s[j][idx]);
      }
    }
  }
  
  for (int i=0; i<m; ++i) {
    bool ok = true;
    if (s[i].size() != n) {
      cout << "No" << endl;
      continue;
    }
    for (int j=0; j<n; ++j) {
      if (!dict[j].count(s[i][j])) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
