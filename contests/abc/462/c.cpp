#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool cmp1(pair<int, int> p1, pair<int, int> p2) {
  return p1.first < p2.first;
}
bool cmp2(pair<int, int> p1, pair<int, int> p2) {
  return p1.second < p2.second;
}

int main() {
  int n; cin >> n;
  vector<pair<int, int>> entries(n);
  vector<int> X(n);
  vector<int> Y(n);
  for (int i=0; i<n; ++i) {
    cin >> X[i] >> Y[i];
    entries[i].first = X[i];
    entries[i].second = Y[i];
  }

  sort(entries.begin(), entries.end(), cmp1);
  // vector<pair<int, int>> xsorted = entries;
  // sort(xsorted.begin(), xsorted.end());
  // vector<pair<int, int>> ysorted = entries;
  // sort(ysorted.begin(), ysorted.end());

  int res = 0;
  int min = entries[0].second;
  for (int i=0; i<n; ++i) {
    if (entries[i].second > min) {
      continue;
    } else {
      min = entries[i].second;
      res += 1;
    }
  }
  cout << res << endl;

  return 0;
}
