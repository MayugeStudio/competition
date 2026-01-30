#include <iostream>
#include <queue>
using namespace std;
using ll = long long;
ll n, x, y;

ll calc(int lv, bool is_red) {
  if (lv == 1) return is_red ? 0 : 1;

  if (is_red) {
    return calc(lv-1, true) + calc(lv, false) * x;
  } else {
    return calc(lv-1, true) + calc(lv-1, false) * y;
  }
}

int main() {
  cin >> n >> x >> y;

  cout << calc(n, true) << endl;

  return 0;
}
