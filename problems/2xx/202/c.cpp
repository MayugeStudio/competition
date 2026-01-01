#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;

  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);

  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];
  for (int i=0; i<n; ++i) cin >> c[i];

  vector<int> d(n);
  for (int i=0; i<n; ++i) d[i] = b[c[i]-1];

  vector<int> cnt(n);
  for (int i=0; i<n; ++i) cnt[d[i]]++;


  long long ans = 0;
  for (int i=0; i<n; ++i) {
    ans += cnt[a[i]];
  }

  cout << ans << endl;

  return 0;
}
