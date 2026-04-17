#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int n, m; cin >> n >> m;

  vector<ll> a(m);
  vector<ll> b(m);
  for (int i=0; i<m; ++i) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
  }

  int k; cin >> k;
  vector<ll> c(k), d(k);
  for (int i=0; i<k; ++i) {
    cin >> c[i] >> d[i];
    c[i]--, d[i]--;
  }

  ll ans = 0;
  for (int i=0; i<(1LL<<k); ++i) {
    vector<int> ds(n, 0);
    // search
    for (int j=0; j<k; ++j) {
      if (i&(1LL<<j)) {
        ds[c[j]] += 1;
      } else {
        ds[d[j]] += 1;
      }
    }

    // count
    ll cnt = 0;
    for (int i=0; i<m; ++i) {
      if (ds[a[i]] >= 1 && ds[b[i]] >= 1) {
        cnt++;
      }
    }
    ans = max(cnt, ans);
  }

  cout << ans << endl;

  return 0;
}

