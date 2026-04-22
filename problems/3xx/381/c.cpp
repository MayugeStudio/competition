#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  vector<pair<char, int>> rle;

  for (char c: s) {
    if (rle.empty() || rle.back().first != c) {
      rle.push_back({c, 1});
    } else {
      rle.back().second += 1;
    }
  }

  int ans = 1;
  for (int i=1; i<rle.size()-1; ++i) {
    if (rle[i].first != '/') continue;
    if (rle[i].second != 1) continue;

    int cnt = 1;
    if (rle[i-1].first == '1' && rle[i+1].first == '2') {
      cnt += 2*min(rle[i-1].second, rle[i+1].second);
    }

    if (cnt > ans) {
      ans = cnt;
    }
  }

  cout << ans << endl;

  return 0;
}

