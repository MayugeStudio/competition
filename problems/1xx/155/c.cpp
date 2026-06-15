#include <iostream>
#include <map>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> m;
  for (int i=0; i<n; ++i) {
    string s; cin >> s;
    m[s] += 1;
  }

  int ma = 0;
  for (auto e: m) {
    if (ma < e.second) {
      ma = e.second;
    }
  }
  for (auto e: m) {
    if (e.second == ma) cout << e.first << endl;
  } 
  return 0;
}
