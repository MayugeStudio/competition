#include <iostream>
#include <map>
#include <utility>
#include <vector>

using namespace std;

map<long long, long long> m;
vector<long long> v;

int main() {
  long long n; cin >> n;
  v.resize(n);
  for (int i=0; i<n; ++i) {
    long long t; cin >> t;
    v[i] = t;

    m[t]++;
  }

  auto ans = 0;
  for (auto [k, v]: m) {
    if (v == 1) {
      if (k > ans) ans = k;
    }
  }
  for (int i=0; i<n; ++i) {
    if (v[i] == ans) {
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}

