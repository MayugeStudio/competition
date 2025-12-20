#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int l1, l2, r1, r2;
vector<int> v;
int main() {
  cin >> l1 >> r1 >> l2 >> r2;
  int l = max(r1, r2);
  v.resize(l-1);

  for (int i=0; i<=l-2; ++i) {
    if (l1 <= i && i <= r1) {
      v[i]++;
    }
    if (l2 <= i && i <= r2) {
      v[i]++;
    }
  } 
  int ans = 0;
  for (int i=0; i<=l-2; ++i) {
    if (v[i] == 2) ans++;
  }
  cout << ans << endl;
  return 0;
}

