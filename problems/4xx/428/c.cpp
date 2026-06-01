#include <iostream>
#include <vector>
using namespace std;

int main() {
  int q; cin >> q;
  string s;
  vector<int> a{0}, b{0};
  for (int i=0; i<q; ++i) {
    int t; cin >> t;
    if (t == 1) {
      char c; cin >> c;
      if (c == '(') {
        a.push_back(a.back()+1);
      } else {
        a.push_back(a.back()-1);
      }
      b.push_back(min(b.back(), a.back()));
    } else {
      a.pop_back();
      b.pop_back();
    }

    if (a.back() == 0 && b.back() == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
