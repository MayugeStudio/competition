#include <iostream>
#include <map>
using namespace std;

int n;
map<string, int> vm;
int main() {
  cin >> n;
  for (int i=0; i<n; ++i) {
    string t; cin >> t;
    vm[t]++;
  }

  string ans;
  int m = 0;
  for (auto [k, v]: vm) {
    if (v > m) {
      m = v;
      ans = k;
    }
  }
  cout << ans << endl;

  return 0;
}
