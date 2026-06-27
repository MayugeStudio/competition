#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<string> m(h);
  for (int i=0; i<h; ++i) {
    cin >> m[i];
  }

  int ans = 0;

  for (int h1=0; h1<h; ++h1) {
    for (int h2=h1; h2<h; ++h2) {
      for (int w1=0; w1<w; ++w1) {
        for (int w2=w1; w2<w; ++w2) {
          bool ok = true;
          for (int i=h1; i<=h2; ++i) {
            for (int j=w1; j<=w2; ++j) {
              if (m[i][j] != m[h1+h2-i][w1+w2-j]) {
                ok = false;
                break;
              }
            }
            if (!ok) break;
          }
          if (ok) {
            // cout << h1 << ", " << h2 << ", " << w1 <<", " << w2 << endl;
            ans += 1;
          }
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}
