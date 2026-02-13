#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;

int main() {
  int n; cin >> n;
  vector<pll> a(n);

  // O(N)
  ll sames = 0;
  for (int i=0; i<n; ++i) {
    a[i].first = i+1;
    cin >> a[i].second;
    if (a[i].first == a[i].second) sames++;
  }

  ll swaped = 0;
  for (int i=0; i<n; ++i) {
    pll& p = a[i];
    pll q = a[a[i].second-1];
    if (p.first == p.second) continue;

    swap(p.first, p.second);
    if (p == q) swaped ++;
  }

  cout << (sames*(sames-1))/2 + swaped << endl;

  return 0;
}
