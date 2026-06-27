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
  v[r][c] = true;
  bool ok = (0<r) && (r<h-1) && (0<c) && (c<w-1);

  for (int i=0; i<4; ++i) {
    int ny = r + dys[i];
    int nx = c + dxs[i];

    if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
    if (s[ny][nx] == '#') continue;
    if (v[ny][nx]) continue;
    ok &= dfs(ny, nx);
  }

  return ok;
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
  cout << endl;
}

int main() {
  cin >> h >> w;
  s = vector<string>(h);
  v = vector<vector<bool>>(h, vector<bool>(w, false));
  for (int i=0; i<h; ++i) cin >> s[i];

  ll ans = 0;
  for (int r=0; r<h; ++r) {
    for (int c=0; c<w; ++c) {
      if (s[r][c] == '.') {
        if (v[r][c]) continue;
        if (dfs(r, c)) ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}

