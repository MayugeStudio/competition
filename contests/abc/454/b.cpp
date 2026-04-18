#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> f(n);
  for (int i=0; i<n; ++i) { cin >> f[i]; }
  set<int> s;
  map<int, int> mp;
  for (int i=0; i<n; ++i) {
    s.insert(f[i]);
    mp[f[i]]++;
  }
  if (s.size() == n) cout << "Yes" << endl;
  else cout << "No" << endl;

  bool ok = true;
  for (int i=1; i<=m; ++i) {
    if (mp[i] == 0) ok = false;
  }

  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;


  return 0;
}
