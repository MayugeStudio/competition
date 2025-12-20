#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int l1, l2, r1, r2;
vector<int> v;
int main() {
  cin >> l1 >> r1 >> l2 >> r2;
  int l = max(r1, r2);
  v.resize(101);

  for (int i=0; i<=100; ++i) {
    if (l1 <= i && i <= r1) {
      v[i]++;
    }
    if (l2 <= i && i <= r2) {
      v[i]++;
    }
  } 
  int ans = 0;
  for (int i=0; i<=100; ++i) {
    if (v[i] == 2) ans++;
  }
  if (ans == 0) cout << 0 << endl;
  else cout << ans -1 << endl;
  return 0;
}

