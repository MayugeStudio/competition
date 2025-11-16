#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll A, B, M;
vector<ll> a;
vector<ll> b;
vector<ll> x;
vector<ll> y;
vector<ll> c;

int main() {
  cin >> A >> B >> M;
  a.resize(A);
  b.resize(B);
  for (int i=0; i<A; ++i) cin >> a[i];
  for (int i=0; i<B; ++i) cin >> b[i];

  x.resize(M);
  y.resize(M);
  c.resize(M);
  for (int i=0; i<M; ++i) {
    cin >> x[i];
    cin >> y[i];
    cin >> c[i];
    x[i]--;
    y[i]--;
  }
  
  ll amin = *min_element(a.begin(), a.end());
  ll bmin = *min_element(b.begin(), b.end());

  ll no_coupon = amin + bmin;

  ll coupon = no_coupon;
  for (int i=0; i<M; ++i) {
    ll cost = a[x[i]] + b[y[i]] - c[i];
    if (cost < coupon) {
      coupon = cost;
    }
  }

  cout << coupon << endl;

  return 0;
}
