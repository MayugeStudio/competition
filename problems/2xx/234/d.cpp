#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;
using ll = long long;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> p(n);
  for (int i=0; i<n; ++i) {
    cin >> p[i];
  }

  priority_queue<ll, vector<ll>, greater<ll>> q(p.begin(), p.begin()+k);

  // cout << "size: " << z.size() << endl;
  cout << q.top() << endl; // k個目を出力

  // k+1個目からn個目までを出力
  for (int i=k; i<n; ++i) {
    if (q.top() < p[i]) {
      q.pop();
      q.push(p[i]);
    }
    cout << q.top() << endl;
  }

  return 0;
}
