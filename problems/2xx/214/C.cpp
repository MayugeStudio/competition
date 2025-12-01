#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

ll n;
vector<ll> s;
vector<ll> t;

int main() {
  cin >> n;
  s.resize(n); // the time when hand the gem to next sunuke.
  t.resize(n); // the time when sunuke hand the gem.
  for (int i=0; i<n; ++i) cin >> s[i];
  for (int i=0; i<n; ++i) cin >> t[i];

  for (int i=0; i<2*n; ++i) {
    t[(i+1)%n] = min(t[(i+1)%n], t[i%n] + s[i%n]);
  }

  for (int i=0; i<n; ++i) {
    cout << t[i] << endl;
  }

  return 0;
}

