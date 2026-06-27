#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<long long> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  long long max = 1;
  for (int i=0; i<k; ++i) {
    max *= 10;
  }
  max -= 1;

  long long x = 1;

  for (int i=0; i<n; ++i) {
    if (x > max/a[i]) x = 1;
    else x *= a[i];
  }
  cout << x << endl;


  return 0;
}
