#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
using ll = long long;

vector<ll> a;
vector<vector<ll>> g;
vector<string> ans;
set<ll> s;
ll cnt = 0;

void dfs(ll n, ll pv) {
  // -----
  int del = 0;
  if (s.find(a[n])!=s.end()) {
    del = 1;
  } else {
    s.insert(a[n]);
  }
  cnt += del;
  if (cnt > 0) {
    ans[n] = "Yes";
  } else {
    ans[n] = "No";
  }
  // -----

  for (int i=0; i<g[n].size(); ++i) {
    if (g[n][i] == pv) continue;
    dfs(g[n][i], n);
  }

  cnt -= del;
  if (del == 0) {
    s.erase(a[n]);
  }
}

int main() {
  ll n; cin >> n;
  a.resize(n);
  for (ll i=0; i<n; ++i) cin >> a[i];

  g.resize(n);
  for (ll i=0; i<n-1; ++i) {
    ll u, v; cin >> u >> v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  ans.resize(n);

  dfs(0, -1);

  for (ll i=0; i<n; ++i) {
    cout << ans[i] << endl;
  }


  return 0;
}
