#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
  int n; cin >> n;
  int water = 0;
  vector<pair<int, int>> w(n);
  int prev = 0;
  for (int i=0; i<n; ++i) {
    int t, v; cin >> t >> v;
    int a = t - prev;
    if (a > water) {
      water = 0;
    } else {
      water -= a;
    }

    water += v;

    prev = t;
  }

  cout << water << endl;

  return 0;
}
