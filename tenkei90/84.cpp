#include <iostream>
#include <vector>
#include <string>
#include <utility>
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
  long long int ans = 0;
  for (int l=0; l<rle.size()-2; ++l) {
    for (int r=l+2; r<rle.size(); ++r) {
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
