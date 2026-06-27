#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> as(n);
  for (int i=0; i<n; ++i) {
    int a; cin >> a; a--;
    as[i] = a;
  }

  int lighted = 0;
  for (int i=0; i<2*n; ++i) {
    lighted = as[lighted];
    if (lighted == 1) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;

  return 0;
}
// 3 3 4 2 4
// 1 -> 3 -> 4 -> 2
//
//
