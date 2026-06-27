#include <iostream>
using namespace std;



int main() {
  int x;
  cin >> x;
  for (int i=0; i<7; ++i) {
    char t; cin >> t;
    if (i != x-1) continue;
    if (t == 'o') {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
