#include <iostream>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  string s;
  for (int j=0; j<26; ++j) {
    for (int i=0; i<n; ++i) {
      s += ('A' + j);
    }
  }
  cout << s[x-1] << endl;
  return 0;
}
