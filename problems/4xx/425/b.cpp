#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  for (int i=0; i<n; ++i) {
    if (a[i] == -1) continue;
    int cnt = 0;
    for (int k=0; k<n; ++k) {
      if (a[i] == a[k]) cnt++;
    }
    if (cnt >= 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  vector<int> v;
  for (int i=1; i<=n+1; ++i) {
    bool found = false;
    for (int k=0; k<n; ++k) {
      if (i == a[k]) found = true;
    }
    if (found) continue;
    v.push_back(i);
  }

  cout << "Yes" << endl;
  int cnt = 0;
  for (int i=0; i<n; ++i) {
    if (a[i] == -1) cout << v[cnt++] << " ";
    else cout << a[i] << " ";
  }
  cout << endl;


  return 0;
}
