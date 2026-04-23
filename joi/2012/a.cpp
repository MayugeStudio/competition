#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  string s; cin >> s;
  vector<pair<char, ll>> rle;
  for (char c: s) {
    if (rle.empty() || rle.back().first != c) {
      rle.push_back({c, 1});
    } else {
      rle.back().second += 1;
    }
  }

  ll ans = 0;
  for (int i=1; i<rle.size()-1; ++i) {
    if (rle[i-1].first == 'J' &&
        rle[i].first == 'O' &&
        rle[i+1].first == 'I') {
      if (rle[i].second <= rle[i-1].second && rle[i].second <= rle[i+1].second) {
        ans = max(ans, min({
            rle[i-1].second,
            rle[i].second,
            rle[i+1].second}));
      }
    }
  }

  cout << ans << endl;

  return 0;
}
