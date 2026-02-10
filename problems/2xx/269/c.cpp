#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;

  vector<ll> res;
  res.push_back(0);

  for (ll s = n; s; s = (s-1)&n) {
    res.push_back(s);
  }

  sort(res.begin(), res.end());
  for (auto v : res) cout << v << endl;

  return 0;
}

