#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll unsigned long long

ll N, M;
vector<ll> A;
vector<ll> B;

ll f(ll a1, ll a2) {
  return a1 * (log10(a2)+1) + a2;
}

int main() {
  cin >> N >> M;
  A.resize(N);
  for (int i=0; i<N; ++i) cin >> A[i];

  sort(A.begin(), A.end());

  ll ans = 0;

  for (int i=0; i<A.size(); ++i) {
    if (A[i] >= M && A[i] % M == 0) {
      ans += A.size();
      continue;
    }

    for (int k=0; k<A.size(); ++k) {
      if (f(A[k], A[i]) % M == 0) ans++;
    }
  }
  cout << ans << endl;

  return 0;
}

