#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  const int L = 100001;
  vector<bool> x(L);
  for (int i=0; i<n; ++i) {
    int a; cin >> a;
    x[a] = true;
  }

  // 素因数リスト
  vector<int> d;
  for (int i=2; i<L; ++i) {
    bool flag = false;
    for (int j=i; j<L; j+=i) {
      if (x[j]) flag = true;
    }

    if (flag) d.push_back(i);
  }

  vector<bool> ok(m+1, true);
  for (int i : d) {
    for (int j=i; j<=m; j+=i) {
      ok[j] = false;
    }
  }

  int cnt = 0;
  for (int i=1; i<=m; ++i) if (ok[i]) cnt++;
  cout << cnt << endl;
  for (int i=1; i<=m; ++i) if (ok[i]) cout << i << endl;

  return 0;
}
