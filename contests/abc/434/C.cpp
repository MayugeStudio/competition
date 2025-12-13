#include <iostream>
#include <vector>
using namespace std;

#define ll long long

vector<string> ans;

void solve() {
  ll n; cin >> n;
  ll h; cin >> h;

  vector<ll> ts(n+1), ls(n+1), us(n+1);
  ts[0] = 0;
  ls[0] = h;
  us[0] = h;
  for (int i=1; i<n+1; ++i) cin >> ts[i] >> ls[i] >> us[i];

  for (int i=0; i<n; ++i) {

    // minus
    ll l = ls[i] - ts[i];
    ll u = us[i] - ts[i];
    if (u - ls[i+1] >= 0 || us[i+1] - l >= 0) {
      if (us[i+1] > u) us[i+1] = u;
      if (ls[i+1] < l) ls[i+1] = l;
    } {
      ans.push_back("No");
      return;
    }
  }

  ans.push_back("Yes");

  return;
}

ll T;
int main() {
  cin >> T;
  for (int i=0; i<T; ++i) solve();
  for (int i=0; i<T; ++i) cout << ans[i] << endl;

  return 0;
}
