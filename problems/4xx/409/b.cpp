#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  sort(a.rbegin(), a.rend());
  for (int i=n; i>0; --i) {
    if (a[i-1] >= i) {
      cout << i << endl;
      return 0;
    }
  }
  cout << 0 << endl;
}
