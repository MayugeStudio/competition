#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll N, M;
vector<ll> A, B;

int main() {
  cin >> N >> M;
  A.resize(N); B.resize(M);
  for (ll i=0; i<N; ++i) cin >> A[i];
  for (ll i=0; i<M; ++i) cin >> B[i];

  ll ans = 1000000000;
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  ll ai = 0;
  ll bi = 0;
  while (ai < N && bi < M) {
    ll d = abs(A[ai]-B[bi]);
    if (d < ans) ans = d;
    
    if (A[ai] < B[bi]) ai++;
    else bi++;
  }
  
  cout << ans << endl;

  return 0;
}
