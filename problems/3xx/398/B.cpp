#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m;

int main() {
  for (int i=0; i<7; ++i) {
    int t; cin >> t;
    m[t] ++;
  }

  bool three = false;
  bool two = false;

  for (auto k: m) {
    if (k.second >= 3 && !three) {
        three = true;
    } else if (k.second >= 2 && !two) {
      two = true;
    }
  }
  
  if (three && two) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
