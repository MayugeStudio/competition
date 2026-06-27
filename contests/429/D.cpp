#include <iostream>
#define ll long long
using namespace std;

int main() {
  ll N; cin >> N;
  ll M; cin >> M;
  ll C; cin >> C;
  unordered_map<ll, ll> m;
  for (int i=0; i<N; ++i) {
    ll t; cin >> t;
    m[t]++;
  }

  ll ans = 0;

  for (ll i=0; i<M-1; ++i) {
    // initial position
    ll met = 0;
    // walk around M
    for (ll p=i+0.5; met<=C; p+=0.5) {
      met += m[p];
      if (p >= M) {
        p=0;
      }
    }
    ans += met;
  }

  cout << ans << endl;

  return 0;
}

