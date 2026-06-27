#include <iostream>
#include <map>
#include <vector>
using namespace std;

using ll = long long;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> c(n);
  for (int i=0; i<n; ++i) cin >> c[i];

  map<ll, ll> nums;
  ll ans = 0;
  for (int i=0; i<n; ++i) {
    nums[c[i]]++;
    if (i >= k) {
      nums[c[i-k]]--;
      if (nums[c[i-k]] == 0) {
        nums.erase(c[i-k]);
      }
    }
    if (nums.size() > ans) ans = nums.size();
  }
  cout << ans << endl;
  return 0;
}
