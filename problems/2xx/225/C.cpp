#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll n, m;

int main() {
  cin >> n >> m;
  vector<vector<ll>> b(n);
  vector<vector<ll>> x(n, vector<ll>(m)), y(n, vector<ll>(m));


  for (int i=0; i<n; ++i) {
    b[i].resize(m);
    for (int j=0; j<m; ++j) {
      cin >> b[i][j];
    }
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      x[i][j] = (b[i][j]+6)/7;
      y[i][j] = (b[i][j]-1)%7+1;
    }
  }

  string ans = "Yes";
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      if (i > 0 && x[i][j] != x[i-1][j]+1) ans = "No";
      if (j > 0 && y[i][j] != y[i][j-1]+1) ans = "No";
      if (j > 0 && x[i][j] != x[i][j-1]) ans = "No";
      if (i > 0 && y[i][j] != y[i-1][j]) ans = "No";
    }
  }

  cout << ans << endl;
  return 0;
}
