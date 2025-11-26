#include <iostream>
#include <unordered_map>
using namespace std;

#define ll long long

ll N;

int main() {
  unordered_map<ll, ll> m;
  cin >> N;
  ll ans = 0;
  for (int i=0; i<N; ++i) {
    int t; cin >> t;
    m[t]++;
    if (m[t] == 2) {
      m[t] = 0;
      ans++;
    }
  }
  cout << ans << endl;
}

