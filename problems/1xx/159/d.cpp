#include <iostream>
#include <vector>
#include <map>
using namespace std;

using ll = long long;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  map<ll, ll> m;
  for (int i=0; i<n; ++i) {
    cin >> a[i];
    m[a[i]] += 1;
  }

  ll total = 0;
  for (auto e: m) {
    if (e.second == 1) continue;
    total += e.second*(e.second-1)/2;
  }

  for (int k=0; k<n; ++k) {
    total -= m[a[k]]*(m[a[k]]-1)/2;
    m[a[k]] -= 1;
    total += m[a[k]]*(m[a[k]]-1)/2;
    cout << total << endl;
    total -= m[a[k]]*(m[a[k]]-1)/2;
    m[a[k]] += 1;
    total += m[a[k]]*(m[a[k]]-1)/2;

  }
  return 0;
}
