#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n), b(n);
  for (int i=0; i<n; ++i) {
    cin >> a[i] >> b[i];
  }

  //[n][m]
  vector<vector<bool>> dp(n+1, vector(x+1, false));
  dp[0][0] = true;

  for (int i=0; i<n; ++i) {
    for (int m=0; m<=x; ++m) {
      if (m >= a[i] && dp[i][m-a[i]]) {
        dp[i+1][m] = true;
      }
      if (m >= b[i] && dp[i][m-b[i]]) {
        dp[i+1][m] = true;
      }
    }
  }

  if (dp[n][x]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
