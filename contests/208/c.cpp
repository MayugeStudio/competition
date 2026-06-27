#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct status {
  ll index;
  ll count;
};
using pll = pair<long long, status>;

int main() {
  long long n, k; cin >> n >> k;

  vector<pll> a(n);

  for (int i=0; i<n; ++i) {
    cin >> a[i].first;
    a[i].second.index = i;
    a[i].second.count = 0;
  }

  ll cnt = k/n;
  k -= n*cnt;
  for (int i=0; i<n; ++i) a[i].second.count += cnt;

  auto f1 = [](pll a, pll b) -> bool {
    return a.first < b.first;
  };

  sort(a.begin(), a.end(), f1);

  ll i=0;
  while (k > 0) {
    a[i].second.count++;
    k--;
    i++;
  }

  auto f2 = [](pll a, pll b) -> bool {
    return a.second.index < b.second.index;
  };

  sort(a.begin(), a.end(), f2);

  for (int i=0; i<n; ++i) {
    cout << a[i].second.count << endl;
  }


  return 0;
}
