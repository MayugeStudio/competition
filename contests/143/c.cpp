#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  vector<pair<char, int>> v;

  char c = '\0';
  int cnt = 0;

  for (int i=0; i<n; ++i) {
    if (s[i] == c) cnt++;
    else {
      if (c == '\0') {
        c = s[i];
        cnt = 1;
        continue;
      }
      v.push_back({c, cnt});
      c = s[i];
      cnt = 1;
    }
  }
  v.push_back({c, cnt});

  cout << v.size() << endl;
  return 0;
}
