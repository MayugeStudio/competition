#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  set<int> a;

  for (int i=0; i<n; ++i) {
    int t; cin >> t;
    a.insert(t);
  }

  for (int i=0; i<2001; ++i) {
    if (a.count(i) == 0) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
