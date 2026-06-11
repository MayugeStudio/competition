#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  // s をできる限り小さく
  // t をできる限り大きく
  
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<char>());

  if (s < t) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
