#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll n;
vector<ll> even, odd;
int main() {
  cin >> n;
  for (int i=0; i<n; ++i) {
    int a; cin >> a;
    if (a%2 == 0) {
      even.push_back(a);
    } else {
      odd.push_back(a);
    }
  }

  sort(even.begin(), even.end(), greater<int>());
  sort(odd.begin(), odd.end(), greater<int>());

  ll ans = -1;
  if (even.size() >= 2) ans = max(ans, even[0] + even[1]);
  if (odd.size() >= 2) ans = max(ans, odd[0] + odd[1]);
  cout << ans << endl;

  return 0;
}
