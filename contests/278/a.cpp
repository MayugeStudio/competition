#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  
  vector<int> ans;
  for (int i=k; i<n; ++i) {
    ans.push_back(a[i]);
  }
  for (int i=0; i<k; ++i) {
    ans.push_back(0);
  }

  for (int i=0; i<n; ++i) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
