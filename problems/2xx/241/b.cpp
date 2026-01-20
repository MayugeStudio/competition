#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  map<ll, ll> c;
  for (int i=0; i<n; ++i) {
    ll t; cin >> t;
    c[t]++;
  }
  vector<ll> b(n);
  for (int i=0; i<m; ++i) cin >> b[i];

  for (int i=0; i<m; ++i) {
    if (c[b[i]] == 0) {
      cout << "No" << endl;
      return 0;
    }
    c[b[i]]--;
  }
  cout << "Yes" << endl;
  return 0;
}
