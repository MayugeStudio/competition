// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define rep(i, x, limit) for (int i=(int)x; (int)i<limit; ++i)
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

int dirs[4][2] = {
  {0, 1},
  {1, 0},
  {0, -1},
  {-1, 0}
};

int h, w;
queue<int> q;
map<pii> warp;

int main() {
  cin >> h >> w;
  vector<vector<int>> grid(h, vector<int>(w));
  rep(i, 0, h) {
    rep(j, 0, w) {
      cin >> grid[i][j];
    }
  }

  q.push()
  while (!q.empty()) {

  }


  
  return 0;
}

