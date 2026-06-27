#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

void solve() {
  string s; cin >> s;
  int n = s.size();

  vector<int> xs(26);
  for (int i=0; i<n; ++i) {
    xs[s[i]-'a'] += 1;
  }
  for (auto x: xs) {
    if (x > (n+1)/2) {
      cout << "No" << endl;
      return;
    }
  }

  string ans = "";
  int prev = -1;
  while (1) {
    int idx = -1;
    int mx = 0;
    for (int i=0; i<26; ++i) {
      if (i == prev) continue;
      if (mx < xs[i]) {
        mx = xs[i];
        idx = i;
      }
    }
    if (idx == -1) break;

    ans += 'a' + idx;
    xs[idx] -= 1;
    prev = idx;
  }
  cout << "Yes" << endl;
  cout << ans << endl;
}

int main() {
  int t; cin >> t;
  for (int i=0; i<t; ++i) {
    solve();
  }
  return 0;
}
