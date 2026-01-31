#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  reverse(a.begin(), a.end());
  for (int i=0; i<n; ++i) {
    cout << a[i] << endl;
  }
  return 0;
}
