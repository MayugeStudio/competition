#include <iostream>
using ll = long long;
using namespace std;

const ll MOD = 998244353;

int main() {
  ll A, B, C; cin >> A >> B >> C;

  ll asum = (A*(A+1)/2)%MOD;

  ll bsum = (B*(B+1)/2)%MOD;

  ll csum = (C*(C+1)/2)%MOD;

  ll sum = (asum * bsum) % MOD;
  sum *= csum;
  sum %= MOD;


  cout << sum << endl;

  return 0;
}

