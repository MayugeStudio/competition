#include <algorithm>
#include <cmath>
#include <climits>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
using ll = long long;

ll dest(pair<ll, ll> a, pair<ll, ll> b) {
  return abs(a.first-b.first) + abs(a.second-b.second);
}

int main() {
  int n, m; cin >> n >> m;
  vector<pair<ll, ll>> students(n);
  for (int i=0; i<n; ++i) {
    int a, b; cin >> a >> b;
    students[i].first = a;
    students[i].second = b;
  }

  vector<pair<ll, ll>> points(m);
  for (int i=0; i<m; ++i) {
    int c, d; cin >> c >> d;
    points[i].first = c;
    points[i].second = d;
  }

  vector<pair<ll, ll>> ans(n, {-1, LLONG_MAX});
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      ll d = dest(points[j], students[i]);
      if (d < ans[i].second) {
        ans[i].first = j;
        ans[i].second = d;
      }
    }
  }

  for (int i=0; i<n; ++i) {
    cout << ans[i].first+1 << endl;
  }


  return 0;
}
