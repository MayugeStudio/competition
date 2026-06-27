#include <climits>
#include <iostream>
using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> x(n);
  vector<int> y(n-1);
  for (int i=0; i<n; ++i) {
    cin >> x[i];
  }

  for (int i=0; i<n-1; ++i) {
    cin >> y[i];
  }

  // 3 masu miru
  
  long long score = 0;
  for (int i=0; i<n-2; ++i) {
    string z;
    z += s[i];
    z += s[i+1];
    z += s[i+2];

    long long srs = LLONG_MAX;
    long long yd = y[i];

    // SRS
    for (int i=0; i<(2<<3); ++i) {
      long long temp;
      for (int j=0; j<3; ++j) {
        if (i&(1<<j)) temp += x[j];
      }
      if (temp < srs) srs = temp;
    }

    if (yd > xd) {
      score += yd - xd;
      s[i] = 'R';
      s[i+1] = 'S';
    }
  }

  cout << score << '\n';
}

int main() {
  int t; cin >> t;
  for (int i=0; i<t; ++i) solve();
  return 0;
}
