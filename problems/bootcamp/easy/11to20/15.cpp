#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main() {
  ll N; cin >> N;
  vector<ll> d(N);

  for (ll i=0; i<N; ++i) {
    cin >> d[i];
  }

  sort(d.begin(), d.end());

  ll mid_left = d[N/2-1];
  ll mid_right = d[N/2];

  cout << mid_right - mid_left << endl;
  return 0;
}
