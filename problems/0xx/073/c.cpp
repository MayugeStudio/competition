#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  set<ll> s;
  for (int i=0; i<n; ++i) {
    ll a; cin >> a;
    if (s.count(a)) {
      s.erase(a);
    } else {
      s.insert(a);
    }
  }
  cout << s.size() << endl;
}
