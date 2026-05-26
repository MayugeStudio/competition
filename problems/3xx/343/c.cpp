#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;
using ll = long long;

int main() {
  int n, t; cin >> n >> t;
  vector<ll> a(t), b(t);
  vector<ll> s(n);
  map<ll, ll> m;

  for (int i=0; i<t; ++i) {
    cin >> a[i] >> b[i];
    a[i]--;
  }

  m[0] = n;

  for (int i=0; i<t; ++i) {
    ll prev_score = s[a[i]];
    m[prev_score]--;
    if (m[prev_score] <= 0) {
      m.erase(prev_score);
    }
    s[a[i]] += b[i];
    ll curr_score = s[a[i]];
    m[s[a[i]]]++;
    
    // cout << "-------" << endl;
    cout << m.size() << endl;
    // for (auto [k, v] : m) {
    //   cout << "(k, v) = " << "(" << k << ", " << v << ")" << endl;
    // }
  }

  return 0;
}
