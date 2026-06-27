#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

using pii = pair<int, int>;
using ll = long long;

bool cmp(pii p1, pii p2) {
  if (p1.first == p2.first) return p1.second < p2.second;
  return p1.first < p2.first;
}

int main() {
  int n, d; cin >> n >> d;

  vector<pair<int, int>> st(n);
  vector<pair<int, int>> table; // time, human id
  
  for (int i=0; i<n; ++i) {
    int s, t; cin >> s >> t;
    if (t - s + 1 < d) continue;
    table.push_back({s, i});   // idは、sの時iで、tの時i+n
    table.push_back({t, i+n});
  }
  sort(table.begin(), table.end(), cmp);

  for (int i=0; i<table.size(); ++i) cout << table[i].first << endl;
  vector<pair<ll, ll>> acc(2*n+1); // cnt, range
  acc[0] = {0, 0};
  for (int i=0; i<2*n; ++i) {
    if (table[i].second < n) { // open
      acc[i+1] = {acc[i].first + 1, table[i].first};
    } else {
      acc[i+1] = {acc[i].first - 1, table[i].first};
    }
  }

  for (int i=0; i<acc.size(); ++i) {
    cout << acc[i].first << ", " << acc[i].second << endl;
  }

  return 0;
}
