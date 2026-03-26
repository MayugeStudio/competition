#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  ll n, m, h, k; cin >> n >> m >> h >> k;

  string s; cin >> s;

  set<pair<ll, ll>> items;
  for (ll i=0; i<m; ++i) {
    ll x, y; cin >> x >> y;
    items.insert(make_pair(x, y));
  }

  ll x = 0;
  ll y = 0;

  for (char c: s) {
    switch (c) {
      case 'U': {
        h--;
        y += 1;
      } break;
      case 'D': {
        h--;
        y -= 1;
      } break;
      case 'L': {
        h--;
        x -= 1;
      } break;
      case 'R': {
        h--;
        x += 1;
      } break;
    }

    if (h < 0) {
      cout << "No" << endl;
      return 0;
    } else if (items.count(make_pair(x, y)) && h < k) {
      h = k;
      items.erase(make_pair(x, y));
    }
  }

  cout << "Yes" << endl;
  return 0;
}
