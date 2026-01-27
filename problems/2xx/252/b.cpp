#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  vector<int> b(k);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<k; ++i) cin >> b[i];

  int max_a = *max_element(a.begin(), a.end());

  for (int i=0; i<k; ++i) {
    if (a[b[i]-1] == max_a) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
