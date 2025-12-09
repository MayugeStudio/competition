#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

using cheese = pair<ll, ll>;

ll n, w;
vector<cheese> cs; // cheeses

int main() {
  cin >> n >> w;
  cs.resize(n);
  for (ll i=0; i<n; ++i) {
    ll a1, b1;
    cin >> a1 >> b1;
    cs[i] = make_pair(a1, b1);
  }

  sort(cs.begin(), cs.end(), greater<cheese>());

  ll cost = 0;
  ll ans = 0;
  ll index = 0;
  while (cost < w && index < cs.size()) {
    cheese c = cs[index];
    ll max_cnt = w-cost;
    if (max_cnt <= 0) break;
    ll c_cost = min(max_cnt, c.second);
    cost += c_cost;
    ans += c_cost * c.first;
    index++;
  }

  cout << ans << endl;

  return 0;
}
