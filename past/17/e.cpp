#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
  string s; cin >> s;
  vector<pair<char, int>> ans;

  char cur = '\0';
  int cnt = 0;
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == cur) cnt++;
    else {
      if (cur != '\0') {
        ans.push_back({cur, cnt});
      }
      cur = s[i];
      cnt = 1;
    }
  }
  ans.push_back({cur, cnt});

  for (int i=0; i<ans.size(); ++i) {
    if (i != 0) cout << " ";
    cout << ans[i].first << " " << ans[i].second;
  }

  return 0;
}
