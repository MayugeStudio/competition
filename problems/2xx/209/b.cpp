#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);

  int sum = 0;
  int t;
  for (int i=0; i<n; ++i) {
    cin >> t;
    if ((i+1)%2 == 0) {
      sum += t-1;
    } else {
      sum += t;
    }
  }

  if (sum <= x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
