#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;


int main() {
  int h, w; cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w));
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) cin >> a[i][j];
  }

  int ans = 0;

  for (int bit=0; bit<(1<<(h+w-2)); ++bit) {
    if (__builtin_popcount(bit) != h-1) continue; 

    set<ll> s;
    int r = 0, c = 0;
    bool ok = true;

    s.insert(a[0][0]);

    for (int i=0; i<h+w-2; ++i) {
      if (bit & (1<<i)) r++; // shita
      else c++; // migi

      if (!s.insert(a[r][c]).second) {
        ok = false;
        break;
      }
    }
    if (ok) ans++;
  }

  cout << ans << endl;

  return 0;
}

