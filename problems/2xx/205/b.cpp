#include <iostream>
#include <set>
using namespace std;

int main() {
  int n; cin >> n;
  set<int> a;
  for (int i=0; i<n; ++i) {
    int t; cin >> t;
    a.insert(t);
  }

  set<int> b;
  for (int i=1; i<=n; ++i) b.insert(i);

  if (a == b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}
