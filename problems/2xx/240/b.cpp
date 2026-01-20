#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  set<ll> a;
  for (int i=0; i<n; ++i) {
    ll t; cin >> t;
    a.insert(t);
  }
  cout << a.size() << endl;
  return 0;
}
