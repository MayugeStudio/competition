#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

ll N, Q;
vector<ll> a;
vector<ll> v;
ll start = 0;

void solve() { 
}

int main() {
  cin >> N >> Q;
  a.resize(N);
  for (ll i=0; i<N; ++i) {
    cin >> a[i];
  }

  v.resize(N+1);
  for (int i=0; i<N; ++i) {
    v[i+1] = v[i] + a[i];
  }

  for (ll i=0; i<Q; ++i) {
    ll type;
    cin >> type;
    if (type == 1) {
      ll c;
      cin >> c;
      start = (start+c)%N;
    } else {
      ll l, r;
      cin >> l >> r;
      l--; r--;
      l = (l+start)%N;
      r = (r+start)%N;
      ll ans = 0;
      if (l <= r) ans = v[r+1] - v[l];
      else ans = v[N] - (v[l] - v[r+1]);
      cout << ans << '\n';
    }
  }
  return 0;
}
