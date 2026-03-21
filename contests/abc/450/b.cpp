#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  ll n; cin >> n;
  vector<vector<ll>> C(n-1, vector<ll>(n));

  for (ll i=0; i<n-1; ++i) {
    for (ll j=0; j<n-i-1; ++j) {
      cin >> C[i][j];
    }
  }

  bool ok = false;
  for (ll a=0; a<n; ++a) {
    for (ll b=a+1; b<n; ++b) {
      for (ll c=b+1; c<n; ++c) {
        ll ab = C[a][b-a-1];
        ll bc = C[b][c-b-1];
        ll ac = C[a][c-a-1];
        if (ab + bc < ac) {
          ok = true; break;
        }
      }
    }
  }

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
