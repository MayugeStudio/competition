#include <iostream>
#include <string>
using namespace std;


int main() {
  string s; cin >> s;
  int n = s.size();
  int ans = 0;

  for (int i=0; i<n; ++i) {
    for (int j=i; j<n; ++j) {
      for (int k=j; k<n; ++k) {
        if (s[i] == 'A' &&
            s[j] == 'B' &&
            s[k] == 'C' &&
            j - i == k - j) ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}

