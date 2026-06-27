#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  vector<pair<char, int>> regions;

  int cnt = 0;
  char value = s[0];

  for (int i = 0; i < n; ++i) {
    if (value == s[i]) {
      cnt++;
      continue;
    }

    regions.push_back(make_pair(value, cnt));
    cnt = 1;
    value = s[i];
  }
  regions.push_back(make_pair(value, cnt));

  if (s[0] == '0') {
    swap(regions[(k - 1) * 2], regions[(k - 1) * 2 + 1]);
  } else if (s[0] == '1') {
    swap(regions[(k - 1) * 2 - 1], regions[(k - 1) * 2]);
  }

  for (auto region : regions) {
    for (int i = 0; i < region.second; ++i) {
      cout << region.first;
    }
  }
  cout << endl;

  return 0;
}
