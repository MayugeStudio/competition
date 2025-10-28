#include <iostream>
using namespace std;

#define ll long long

int main() {
  ll H; cin >> H;
  ll W; cin >> W;

  ll ans = 0;

  if (W == 1 || H == 1) {
    cout << 1 << endl;
    return 0;
  }

  if (H % 2 == 1) {
    cout << W * (H/2) + (W+1)/2 << endl;
  } else {
    cout << W * (H/2) << endl;
  }
  return 0;
}
