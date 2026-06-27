// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

int h, w, n;
vector<vector<int>> grid;
int main() {
  cin >> h >> w >> n;
  grid.resize(h);
  for (int i=0; i<h; ++i) grid[i].resize(w);
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      cin >> grid[i][j];
    }
  }
  vector<int> b(n);
  for (int i=0; i<n; ++i) cin >> b[i];
  
  int ans = 0;
  
  for (int i=0; i<h; ++i) {

    int cnt = 0;
    for (int j=0; j<w; ++j) {

      for (int k=0; k<n; ++k) {
        if (b[k] == grid[i][j]) cnt++;
      }

    }
    if (cnt > ans) ans = cnt;
  }
  
  cout << ans << endl;

  return 0;
}

