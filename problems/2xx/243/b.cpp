#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);

  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];

  int hit = 0;
  int blow = 0;
  for (int i=0; i<n; ++i) {
    if (a[i] == b[i]) hit++;
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (a[i] == b[j]) {
        blow++;
        break;
      }
    }
  }
  blow -= hit;

  cout << hit << endl;
  cout << blow << endl;
  
  return 0;
}
