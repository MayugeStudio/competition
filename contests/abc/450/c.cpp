#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

ll h, w; 
vector<string> s;
vector<vector<bool>> v;

int dxs[4] = { 1, -1, 0,  0};
int dys[4] = { 0, 0,  1, -1};

bool dfs(ll r, ll c) {
  if (s[r][c] == '#') {
    return true;
  }

  if (v[r][c]) {
    return true;
  }


  if (r == 0 || r == h-1 || c == 0 || c == w-1) {
    return false;
  }

  v[r][c] = true;
  for (int i=0; i<4; ++i) {
    int dx = dxs[i];
    int dy = dys[i];

    if (r + dy >= 0  &&
        r + dy < h &&
        c + dx >= 0  &&
        c + dx < w) {
      if (!dfs(r+dy, c+dx)) {
        return false;
      }
    } else {
      return false;
    }

    
  }

  return true;
}

void debug() {
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (v[i][j]) {
        cout << '+';
      } else {
        cout << s[i][j];
      }
    }
    cout << endl;
  }
}

int main() {
  cin >> h >> w;
  s = vector<string>(h);
  v = vector<vector<bool>>(h, vector<bool>(w, false));
  for (int i=0; i<h; ++i) cin >> s[i];

  ll ans = 0;
  for (int r=0; r<h; ++r) {
    for (int c=0; c<w; ++c) {
      if (v[r][c]) continue;
      if (s[r][c] == '#') continue;
      if (dfs(r, c)) {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}

