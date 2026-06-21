#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

using ll = long long;
using pll = pair<long, long>;

int main() {
  int n, k; cin >> n >> k;
  vector<pll> nuno(n);
  for (int i=0; i<n; ++i) {
    ll l, r; cin >> l >> r;
    nuno[i] = {l, r};
  }

  return 0;
}
