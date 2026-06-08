#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;

  map<char, set<int>> m; // map of vector of indecies
  for (int i=0; i<n; ++i) {
    m[s[i]].insert(i);
  }

  for (int i=0; i<q; ++i) {
    char c, d; cin >> c >> d;
    set<int> temp;
    set_union(
       m[c].begin(), m[c].end(),
       m[d].begin(), m[d].end(),
       inserter(temp, temp.begin()));
    m[c].clear();
    m[d] = temp;
  }

  string ans = string(' ', n);
  // cout << n << endl;
  for (auto e: m) {
    char c = e.first;
    set<int> v = e.second;
    if (v.size() == 0) continue;
    for (int k: v) {
      ans[k] = c;
    }
  }

  cout << ans << endl;

  return 0;
}
