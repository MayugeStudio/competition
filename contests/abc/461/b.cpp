#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; ++i) {
    cin >> a[i]; // kikori -> ono
    a[i] -= 1;
  }
  for (int i=0; i<n; ++i) {
    int t; cin >> t; t--;
    b[t] = i;
  } // kikori -> ono
  bool ok = true;
  for (int i=0; i<n; ++i) {
    if (a[i] != b[i]) {ok = false; break;}
  }
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
