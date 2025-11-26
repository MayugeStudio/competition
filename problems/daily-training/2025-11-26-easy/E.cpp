#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
using pll = pair<ll, ll>;

int main() {
  ll N, K, res;
  ll num = 0;
  cin >> N >> K;

  vector<pll> ab(N);
  for (int i=0; i<N; ++i) {
    cin >> ab[i].first >> ab[i].second;
    num += ab[i].second;
  }

  sort(ab.begin(), ab.end(), [&](pll x, pll y){return x.first < y.first;});

  if (num <= K) {
    cout << 1 << endl;
    return 0;
  }

  for (auto [a, b]: ab) {
    num -= b;
    if (num <= K) {
      cout << a + 1 << endl;
      return 0;
    }
  }


  cout << res << endl;
  return 0;
}

