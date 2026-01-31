#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  
  int ans = 0;

  vector<bool> field(4, false);
  for (int i=0; i<n; ++i) {
    vector<bool> next_field(4, false);
    field[0] = true;

    int x = a[i];
    for (int j=0; j<4; ++j) {
      if (field[j]) {
        if (j+x >= 4) {
          ans += 1;
        } else {
          next_field[j+x] = true;
        }
      }
    }
    field = next_field;
  }
  cout << ans << endl;
  
  return 0;
}

