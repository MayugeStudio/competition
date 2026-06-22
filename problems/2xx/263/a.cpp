#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> a(13, 0);
  for (int i=0; i<5; ++i) {
    int t; cin >> t;
    a[t-1] += 1;
  }

  bool three = false;
  bool two = false;
  for (int i=0; i<13; ++i) {
    if (a[i] == 2) two = true;
    if (a[i] == 3) three = true;
  }
  if (two && three) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}
