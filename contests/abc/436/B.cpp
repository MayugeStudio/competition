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

int n;
vector<vector<int>> a;
int main() {
  cin >> n;
  a.resize(n);
  rep(i, 0, n) a[i].resize(n);

  int r = 0;
  int c = (n-1)/2;
  int k = 1;
  a[r][c] = k;
  rep(i, 0, n*n-1) {
    k++;
    if (a[(r-1+n)%n][(c+1+n)%n] == 0) {
      a[(r-1+n)%n][(c+1+n)%n] = k;
      r = (r-1+n)%n;
      c = (c+1+n)%n;
    } else {
      a[(r+1+n)%n][c] = k;
      r = (r+1+n)%n;
    }
  }

  rep(i, 0, n) {
    rep(j, 0, n) {
      if (j > 0) cout << ' ';
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}

