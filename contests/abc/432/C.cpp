#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

ll N, X, Y;

int main() {
  cin >> N >> X >> Y;
  vector<ll> A(N);
  vector<ll> mini(N);
  vector<ll> maxi(N);
  for (ll i=0; i<N; ++i) cin >> A[i];
  for (ll i=0; i<N; ++i) mini[i] = A[i] * X;
  for (ll i=0; i<N; ++i) maxi[i] = A[i] * Y;

  ll max_of_min = (*min_element(A.begin(), A.end())) * Y;
  ll min_of_max = (*max_element(A.begin(), A.end())) * X;

  if (min_of_max > max_of_min) {
    cout << -1 << endl;
    return 0;
  }

  ll diff = max_of_min - min_of_max;
  ll ans = 0;
  for (ll target=max_of_min; target>=min_of_max; target-=diff) {
    ll ysum = 0;
    bool find = true;
    for (ll i=0; i<N; ++i) {
      bool findany = false;
      for (ll d=0; d<A[i]; ++d) {
        if (A[i] - diff*d == target) {
          ysum += A[i]-d;
          findany = true;
        }
      }
      if (!findany) {
        find = false;
        break;
      }
    }
    if (find && ysum > ans) ans = ysum;
  }
  cout << ans << endl;

  return 0;
}

