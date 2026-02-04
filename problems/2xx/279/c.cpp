#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll h, w; cin >> h >> w;
  vector<string> s(h), t(h);
  for (int i=0; i<h; ++i) cin >> s[i];
  for (int i=0; i<h; ++i) cin >> t[i];

  vector<string> ts(w), tt(w);
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      ts[j].push_back(s[i][j]);
      tt[j].push_back(t[i][j]);
    }
  }

  sort(ts.begin(), ts.end());
  sort(tt.begin(), tt.end());

  if (ts == tt) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
