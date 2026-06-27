#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  ll n; string s; ll q;
  cin >> n >> s >> q;
  string pre = s.substr(0, n);
  string post = s.substr(n);

  for (int i=0; i<q; ++i) {
    ll t, a, b; cin >> t >> a >> b;
    a--, b--;
    if (t == 2) {
      swap(pre, post);
    } else {
      if (a < n && n <= b) {
        swap(pre[a], post[b-n]);
      } else if (n <= a) {
        swap(post[a-n], post[b-n]);
      } else {
        swap(pre[a], pre[b]);
      }
    }
  }
  for (int i=0; i<n; ++i) {
    cout << pre[i];
  }
  for (int i=0; i<n; ++i) {
    cout << post[i];
  }
  cout << "\n";

  return 0;
}
