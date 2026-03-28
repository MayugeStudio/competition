#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;
using ll = long long;

ll solve() {
  ll n, d; cin >> n >> d;
  vector<ll> a(n);
  vector<ll> b(n);

  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];

  // a queue of (amount, day)
  queue<int> q;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<a[i]; ++j) q.push(i);
    for (int j=0; j<b[i]; ++j) q.pop();
    while (!q.empty() && (q.front() == i-d)) q.pop();
  }
  
  return q.size();
}

int main() {
  ll t; cin >> t;
  for (int i=0; i<t; ++i) {
    cout << solve() << endl;
  }
  return 0;
}
