#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, q; cin >> n >> q;
  string s; cin >> s;
  int start_idx = 0;

  for (int i=0; i<q; ++i) {
    int t, x; cin >> t >> x;
    if (t == 1) {
      start_idx += n-x;
      if (start_idx >= n) start_idx %= n;
    } else {
      x--;
      cout << s[(start_idx + x)%n] << endl;
    }
  }
  
  return 0;
}
