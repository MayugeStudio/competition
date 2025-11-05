#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
  int N; cin >> N;
  ll x; cin >> x;

  vector<ll> v(N);
  for (int i=0; i<N; ++i) {
    cin >> v[i];
  }

  sort(begin(v), end(v));

  int ans = 0;
  for (int i=0; i<N; ++i) {
    x -= v[i];
    if (x < 0) break;
    ans++;
    if (x == 0) break;
  }

  if (x > 0) ans--;
  cout << ans << endl;
  return 0;
}

