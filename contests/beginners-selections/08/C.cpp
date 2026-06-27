#include <iostream>
#define ll long long
using namespace std;

int N;
ll Y;

int main() {
  cin >> N >> Y;

  for (ll i=0; i<N+1; ++i) {
    for (ll k=0; k<N-i+1; ++k) {
      ll j = N - i - k;
      ll iamout = 10000 * i;
      ll kamout = 5000 * k;
      ll jamout = 1000 * j;
      if (iamout + kamout + jamout == Y) {
        cout << i << " " << k << " " << j << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
  return 0;
}
