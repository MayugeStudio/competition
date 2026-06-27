#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const ll  MOD = 1000000007;


int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  ll res = 0;
  ll sum = a[0];
  for (int i=1; i<n; ++i) {
    res += sum * a[i], res %= MOD;
    sum += a[i], sum %= MOD;
  }
  cout << res << endl;

  return 0;
}
