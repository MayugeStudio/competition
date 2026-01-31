#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int ans = 0;
    for (int i=0; i<n; ++i) {
      long long a; cin >> a;
      if (a%2 == 1) ans++;
    } 
    cout << ans << endl;
  }
  return 0;
}

