#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  ll ans = 0;
  map<ll, ll> cnt;
  for (int j=0; j<n; ++j) {
    ans += j - cnt[a[j]];
    cnt[a[j]]++;
  }

  cout << ans << endl;

  return 0;
}
