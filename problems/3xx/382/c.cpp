#include <vector>
#include <iostream>
using namespace std;

const int K = 1e6;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int j=0; j<m; ++j) cin >> b[j];

  vector<int> id(K, -1);
  int r = K;
  for (int i=0; i<n; ++i) {
    while (r >  a[i]) {
      --r;
      id[r] = i + 1;
    }
  }

  for (int i=0; i<m; ++i) {
    cout << id[b[i]] << endl;
  }

  return 0;
}
