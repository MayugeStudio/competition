#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> xs(n), ys(n);

  for (int i=0; i<n; ++i) {
    cin >> xs[i] >> ys[i];
  }

  string s; cin >> s;
  map<ll, vector<pair<ll, ll>>> data; // x, direction_char

  for (int i=0; i<n; ++i) {
    data[ys[i]].push_back(make_pair(xs[i], s[i]));
  }

  // Y
  bool res = false;
  for (auto [y, v]: data) {
    sort(v.begin(), v.end());

    for (int i=0; i<v.size()-1; ++i) {
      if (v[i].second == 'R' && v[i+1].second == 'L') {
        res = true;
      }
    }
  }


  cout << (res ? "Yes" : "No") << endl;

  return 0;
}
