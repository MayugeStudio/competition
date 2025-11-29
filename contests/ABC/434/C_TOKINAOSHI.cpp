#include <iostream>
#include <vector>
using namespace std;

#define ll long long

bool solve() {
  ll N, H; cin >> N >> H;
  vector<ll> T(N), L(N), U(N);
  for (ll i=0; i<N; ++i) cin >> T[i] >> L[i] >> U[i];
  
  ll u = H, l = H, t = 0;
  for (ll i=0; i<N; ++i) {
    ll dt = T[i] - t;
    t = T[i];
    l -= dt;
    u += dt;
    l = max(l, L[i]);
    u = min(u, U[i]);
    if (l > u) return false;
  }
  return true;
}

ll T, H;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> T;

  for (ll i=0; i<T; ++i) {
    bool result = solve();
    if (result) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
