#include <iostream>
#include <map>
using namespace std;

int n;
map<long long, int> a;
int main() {
  cin >> n;
  for (int i=0; i<4*n - 1; ++i) {
    long long t; cin >> t;
    a[t]++;
  }

  for (auto [key, item] : a) {
    if (item != 4) {
      cout << key << endl;
      break;
    }
  }

  return 0;
}
