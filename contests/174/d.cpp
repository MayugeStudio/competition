#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  // 1.先頭にWがある場合は、Rと入れ替える
  // 2.ない場合は、Rを全てWにかえる

  // 1.先頭のWを探す
  vector<int> ws;
  for (int i=0; i<n; ++i) {
    char c = s[i];
    if (c == 'W') {
      ws.push_back(i);
      continue;
    }
    break;
  }

  vector<int> rs;
  for (int i=0; i<n; ++i) {
    if (s[i] == 'R') rs.push_back(i);
  }

  // 2. 先頭のWを置き換える
  int res = 0;
  for (int i=0; i<ws.size(); ++i) {
    if (rs.size() == 0) {
      cout << res << endl;
      return 0;
    }
    s[ws[i]] = 'R';
    s[rs.back()] = 'W';
    rs.pop_back();
    res += 1;
  }


  // cout << "s:" << s << endl;
  // assert that s starts with 'RRR...'
  bool startW = false;
  int rcnt = 0;
  int wcnt = 0;
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == 'R' && !startW) continue;
    if (s[i] == 'W' && !startW) startW = true;
    if (s[i] == 'R' && startW) rcnt += 1;
    if (s[i] == 'W' && startW) wcnt += 1;
  }

  res += min(rcnt, wcnt);

  cout << res << endl;

  
  return 0;
}
