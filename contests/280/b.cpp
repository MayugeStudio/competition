#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<ll> v(n);
  vector<ll> ans(n);

  for (int i=0; i<n; ++i) cin >> v[i];

  ans[0] = v[0];
  for (int i=0; i<n-1; ++i) {
    ans[i+1] = v[i+1] - v[i];
  }

  for (int i=0; i<n; ++i) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
