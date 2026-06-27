#include <iostream>
#include <vector>
using namespace std;
#define ll long long
ll n, x;
ll a[200000];
int main() {
  cin >> n >> x;
  for (int i=0; i<n; ++i) cin >> a[i];
  vector<bool> t(n, false);

  
  ll ans = 0;
  x--;
  while (ans < n) {
    if (!t[x]) {
      t[x] = true;
      ans++;
      x = a[x]-1;
    } else {
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
