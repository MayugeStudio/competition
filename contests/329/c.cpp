#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
int main() {
  int n; cin >> n;
  string s; cin >> s;

  char c = '\0';
  int cnt = 0;
  vector<pair<char, int>> ans;
  
  for (int i=0; i<n; ++i) {
    if (s[i] == c) cnt++;
    else {
      if (c == '\0') {
        c = s[i];
        cnt = 1;
      } else {
        ans.push_back({c, cnt});
        c = s[i];
        cnt = 1;
      }
    }
  }
  ans.push_back({c, cnt});

  vector<int> temp(26, 0);
  for (int i=0; i<ans.size(); ++i) {
    int idx = (int)(ans[i].first - 'a');
    if (ans[i].second > temp[idx]) {
      temp[idx] = ans[i].second;
    }
  }

  int sum = 0;
  for (int i=0; i<26; ++i) {
    sum += temp[i];
  }
  cout << sum << endl;

  return 0;
}
