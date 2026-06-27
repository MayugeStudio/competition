#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

bool f(pll a, pll b) {
  if (a.first == b.first) return a.second < b.second;
  return a.first > b.first;
}

int main() {
  ll n; cin >> n;
  //  poem, (score, idx)
  map<string, pll> m;

  for (int i=0; i<n; ++i) {
    string s; cin >> s;
    ll t; cin >> t;
    // original
    if (m.count(s) == 0) {
      m[s] = make_pair(t, i);
    }
  }

  vector<pll> v;
  for (const auto& it: m) v.push_back(it.second);

  sort(v.begin(), v.end(), f);

  cout << v[0].second+1 << endl;
  
  return 0;
}
