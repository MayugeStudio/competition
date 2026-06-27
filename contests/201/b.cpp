#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
using psl = pair<string, ll>;

bool cmp(psl p1, psl p2) {
  return p1.second > p2.second;
}

int main() {
  int n; cin >> n;
  vector<psl> v(n);
  for (int i=0; i<n; ++i) {
    string s; ll t; cin >> s >> t;
    v[i] = make_pair(s, t);
  }
  sort(v.begin(), v.end(), cmp);

  cout << v[1].first << endl;

  return 0;
}
