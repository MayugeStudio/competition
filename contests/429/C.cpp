#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  long long N; cin >> N;
  unordered_map<long long, long long> m;

  for (int i=0; i<N; ++i) {
    long long t; cin >> t;
    m[t]++;
  }

  long long ans = 0;

  for (auto &[key, item] : m) {
    if (item >= 2) {
      // (n)C(2)
      long long nikoErabu = (item * (item-1))/2;
      // compute rest
      long long rest = N - item;
      ans += nikoErabu * rest;
    }
  }

  cout << ans << endl;

  return 0;
}

