#include <iostream>
using namespace std;

int n, x;
int main() {
  cin >> n >> x;
  for (int i=0; i<n; ++i) {
    int t; cin >> t;
    if (t == x) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
