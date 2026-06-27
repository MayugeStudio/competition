#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, q;
vector<int> a;
int main() {
  cin >> n >> q;
  a.resize(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  sort(a.begin(), a.end());

  for (int i=0; i<q; ++i) {
    int x; cin >> x;
    auto y = lower_bound(a.begin(), a.end(), x);
    cout << a.end() - y << endl;
  }

  return 0;
}
