#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

ll n, k;
int main() {
  cin >> n >> k;
  vector<ll> p(n);
  k--;

  for (int i=0; i<n; ++i) {
    ll s = 0;
    ll a, b, c;
    cin >> a >> b >> c;
    p[i] = a+b+c;
  }

  vector<ll> sorted = p;
  sort(sorted.rbegin(), sorted.rend());

  for (int i=0; i<n; ++i) {
    if (p[i]+300 >= sorted[k]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
