#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int cnt[10][10];

int main() {
  int n; cin >> n;
  vector<string> s(n);

  for (int i=0; i<n; ++i) cin >> s[i];

  for (int i=0; i<n; ++i) {
    for (int j=0; j<10; ++j) {
      cnt[s[i][j]-'0'][j] += 1;
    }
  }

  int ans = 1000;
  for (int i=0; i<10; ++i) {
    int mx = 0;
    for (int j=0; j<10; ++j) {
      mx = max(mx, 10*(cnt[i][j]-1)+j);
    }
    ans = min(ans, mx);
  }
  cout << ans << endl;

  return 0;
}
