#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <utility>
using namespace std;

int main() {
  string s; cin >> s;
  vector<pair<int, char>> cnt;

  set<char> ss = set(s.begin(), s.end());
  for (auto e: ss) cnt.push_back(make_pair(0, e));

  for (int i=0; i<s.size(); ++i) {
    for (int j=0; j<cnt.size(); ++j) {
      if (cnt[j].second == s[i]) cnt[j].first++;
    }
  }

  sort(cnt.begin(), cnt.end());

  set<char> maxes;
  int me = cnt[cnt.size()-1].first;
  for (int i=0; i<cnt.size(); i++) {
    if (cnt[i].first == me) {
      maxes.insert(cnt[i].second);
    }
  }

  for (int i=0; i<s.size(); ++i) {
    char c = s[i];
    if (!maxes.count(c)) {
      cout << c;
    }
  }
  cout << endl;

  return 0;
}
