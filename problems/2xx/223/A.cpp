#include <iostream>
using namespace std;

int main() {
  int T; cin >> T;
  if (T == 0) cout << "No" << endl;
  else if (T % 100 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
