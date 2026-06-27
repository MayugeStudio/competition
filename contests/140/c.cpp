#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
using namespace std;
using pll = pair<long long, long long>;

int main() {
  int n; cin >> n;
  vector<long long> b(n-1);
  for (int i=0; i<n-1; ++i) {
    cin >> b[i];
  }

  vector<long long> a(n, 0);

  a[0] = b[0];

  for (int i=0; i<n-1; ++i) {
    if (a[i] > b[i]) {
      a[i] = b[i];
    }
    a[i+1] = b[i];
  }

  cout << accumulate(a.begin(), a.end(), 0) << endl;

  return 0;
}
