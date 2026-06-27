#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long

ll N, A, B;
string S;

int main() {
  cin >> N >> A >> B;
  cin >> S;
  vector<ll> pa(N+1, 0), pb(N+1, 0);
  for (ll i=1; i<=N; ++i) {
    pa[i] = pa[i-1] + (S[i-1] == 'a' ? 1 : 0);
    pb[i] = pb[i-1] + (S[i-1] == 'b' ? 1 : 0);
  }

  ll ans = 0;
  for (ll l=1; l<=N; ++l) {
    ll lefta = pa[l-1];
    ll leftb = pb[l-1];

    ll low = l; 
    ll high = N+1;
    while (low<high) {
      ll mid = (low + high) / 2;
      if (pa[mid] - lefta >= A) high = mid;
      else low = mid + 1;
    }
    ll r1 = low;

    low = l;
    high = N+1;
    while (low < high) {
      ll mid = (low + high) / 2; 
      if (pb[mid] - leftb >= B) high = mid;
      else low = mid + 1;
    }
    ll r2 = low;

    if (r1 <= N) {
      ll valid = max(0LL, r2 - r1);
      ans += valid;
    }
  }

  cout << ans << endl;

  return 0;
}
