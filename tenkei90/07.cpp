#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  // key: 6
  // 1 3 5 7 9
  //      ^ ^
  //      l u
  // lower_bound -> bound = エリア -> lower_boundはboundの小さい方という意味 -> upper_boundはboundの大きい方という意味
  sort(a.begin(), a.end());


  int q; cin >> q;
  for (int i=0; i<q; ++i) {
    int b; cin >> b;
    auto border = lower_bound(a.begin(), a.end(), b);
    if (border == a.begin()) {
      cout << abs((*border)-b) << endl;
      continue;
    }
    if (abs((*border)-b) < abs((*(border-1))-b)) {
      cout << abs((*border)-b) << endl;
    } else {
      cout << abs((*(border-1)) - b) << endl;
    }
  }

  return 0;
}

