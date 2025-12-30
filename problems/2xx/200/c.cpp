/*
(ai - aj) % 200 == 0
ai % 200 == aj

(211 - 11) % 200 == 0
211 % 200 == 11

*/
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  vector<ll> cnt(200);

  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cnt[a[i]%200]++;

  ll ans = 0;
  for (int i=0; i<200; ++i) {
    ans += (cnt[i]*(cnt[i]-1))/2;
  }
  cout << ans << endl;

  return 0;
}
