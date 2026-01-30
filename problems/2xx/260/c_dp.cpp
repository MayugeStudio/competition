#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll n, x, y;
int main() {
  cin >> n >> x >> y;
  vector<ll> red(n+2), blue(n+2);

  red[1] = 0;
  blue[1] = 1;

  for (int i=2; i<=n; ++i) {
    blue[i] = red[i-1] + blue[i-1]*y;
    red[i] = red[i-1] + blue[i]*x;
  }

  cout << red[n] << endl;

  return 0;
}
