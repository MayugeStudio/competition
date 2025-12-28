#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool f(string a, string b) {
  return a.size() < b.size();
}

int main() {
  int n; cin >> n;
  vector<string> ss(n);
  for (int i=0; i<n; ++i) cin >> ss[i];

  sort(ss.begin(), ss.end(), f);

  for (int i=0; i<n; ++i) cout << ss[i];
  cout << endl;

  return 0;
}
