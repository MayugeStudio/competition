#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> A(n), B(m);
  for (int i=0; i<n; ++i) cin >> A[i];
  for (int i=0; i<m; ++i) cin >> B[i];

  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());

  int ai=0, bi=0;
  int ans = 0;
  while (ai<n && bi<m) {
    int a = A[ai];
    int b = B[bi];
    if (b <= 2*a) {
      ans += 1;
      ai++;
      bi++;
    } else {
      bi++;
    }
  }

  cout << ans << endl;

  return 0;
}
