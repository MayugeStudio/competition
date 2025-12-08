#include <iostream>

using namespace std;

int n;
int s[20];

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> s[i];

  int ans = 0;
  
  for (int i=0; i<n; ++i) {

    bool ok = false;
    for (int a=1; a<1000; ++a) {
      for (int b=1; b<1000; ++b) {
        if (4*a*b + 3*a + 3*b == s[i]) { ok = true; break; }
      }
    }

    if (!ok) ans++;
  }
  cout << ans << endl;
  return 0;
}
