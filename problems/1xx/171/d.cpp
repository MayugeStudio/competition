#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  map<int, int> m; // num, count 
  long long sum = 0;
  for (int i=0; i<n; ++i) {
    cin >> a[i];
    m[a[i]] += 1;
    sum += a[i];
  }
  int q; cin >> q;

  for (int i=0; i<q; ++i) {
    int b, c; cin >> b >> c;
    // 1, 2, 3, 4
    // 2, 2, 3, 4
    // (2-1)*m[1]

    int diff = c-b;
    sum += m[b]*diff;
    m[c] += m[b];
    m[b] = 0;
    cout << sum << endl;
  }

  return 0;
}
