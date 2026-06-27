#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n-1);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];
  for (int i=0; i<n-1; ++i) cin >> c[i];

  for (int i=0; i<n; ++i) {}

  return 0;

}
