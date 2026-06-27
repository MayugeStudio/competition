#include <iostream>
using namespace std;
using ll = long long;

ll dist(ll x1, ll y1, ll x2, ll y2) {
  return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

void solve() {
  ll x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1;
  cin >> x2 >> y2 >> r2;

  ll d = dist(x1, y1, x2, y2);

  if (d < (r1-r2)*(r1-r2)) {
    cout << "No" << endl;
    return;
  }
  
  if ((r1+r2)*(r1+r2) < d) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}

int main() {
  int t; cin >> t;
  for (int i=0; i<t; ++i) {
    solve();
  }
  return 0;
}
