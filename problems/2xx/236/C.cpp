#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m;
int main() {
  cin >> n >> m;

  vector<string> s(n);
  vector<string> t(m);
  for (int i=0; i<n; ++i) cin >> s[i];
  for (int i=0; i<m; ++i) cin >> t[i];

  int si = 0;
  int ti = 0;

  while (si < n && ti < m) {
    if (s[si] == t[ti]) {
      cout << "Yes" << endl;
      si++;
      ti++;
    } else {
      cout << "No" << endl;
      si++;
    }
  }

  return 0;
}
