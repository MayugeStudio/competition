#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<string> s(n);
  for (int i=0; i<n; ++i) cin >> s[i];

  int ans = n+1;
  // 店の選び方がp
  for (int p=0; p<(1<<n); ++p) {
    int t = 0; // 選ばれた店を示す(ビットで)
    // vector<bool> t(m, false); // 選ばれた店を示す

    int cnt = 0; // 選んだ店の数
    // どの店が選ばれているかbit全探索で調べる
    for (int j=0; j<n; ++j) {
      // 選ばれていたら、
      if (p&(1<<j)) {
        cnt += 1;
        string x = s[j];
        // どのポップコーンが売られているか調べる
        for (int i=0; i<m; ++i) {
          if (x[i] == 'o') t |= (1<<i);
        }
      }
    }

    bool ok = true;
    // for (int i=0; i<m; ++i) {
    //   if (!t[i]) {
    //     ok = false;
    //     break;
    //   }
    // }
    if (t == pow(2, m)-1) ans = min(cnt, ans);
  }

  cout << ans << endl;

  return 0;
}
