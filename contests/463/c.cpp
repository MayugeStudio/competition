#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <set>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

bool sort_taka(pll t1, pll t2) {
  return t1.second < t2.second;
}

int main() {
  ll n; cin >> n;
  vector<pll> taka(n);
  map<ll, ll> hm;
  set<ll> takaset;
  for (int i=0; i<n; ++i) {
    cin >> taka[i].first >> taka[i].second;
    hm[taka[i].first] += 1;
    takaset.insert(taka[i].first);
  }

  sort(taka.begin(), taka.end(), sort_taka);


  vector<ll> memo(n);

  for (int i=0; i<n; ++i) {
    memo[i] = *takaset.rbegin(); // max
    hm[taka[i].first] -= 1;
    if (hm[taka[i].first] <= 0) {
      takaset.erase(taka[i].first);
    }
  }

  // cout << "memo:" << endl;;
  // for (int i=0; i<n; ++i) {
  //   cout << memo[i] << endl;
  // }
  // cout << "memo end:" << endl;
  
  ll q; cin >> q;
  while (q--) {
    ll t; cin >> t;
    pll k = { LLONG_MAX, t};
    ll idx = upper_bound(taka.begin(), taka.end(), k, sort_taka) - taka.begin();
    cout << memo[idx] << endl;
  }

  return 0;
}
