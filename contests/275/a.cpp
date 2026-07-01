#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; ++i) { cin >> h[i]; }

  auto m = max_element(h.begin(), h.end());

  cout << m - h.begin() + 1 << endl;

  return 0;
}
