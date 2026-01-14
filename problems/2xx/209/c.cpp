#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> c(n);

  for (int i=0; i<n; ++i) cin >> c[i];

  sort(c.begin(), c.end());

  ll cnt = 0;
  ll ans = 1;
  for (int i=0; i<n; ++i) {
    ans *= c[i]-cnt;
    ans %= (1000000000+7);
    cnt++;
  }

  cout << ans << endl;




  return 0;
}



