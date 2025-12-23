#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main() {
  ll n, x; cin >> n >> x;
  vector<ll> a(n);
  set<ll> s;
  for (int i=0; i<n; ++i) {
    cin >> a[i];
    s.insert(a[i]);
  }

  for (int i=0; i<n; ++i) {
    if (s.count(x + a[i])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
