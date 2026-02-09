#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  sort(a.rbegin(), a.rend());

  vector<int> k(n, 0);
  set<int> counter;
  for (int i=0; i<n; ++i) {
    counter.insert(a[i]);
    k[counter.size()-1]++;
  }

  for (int i=0; i<n; ++i) {
    cout << k[i] << endl;
  }

  return 0;
}
