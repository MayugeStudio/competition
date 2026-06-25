#include <iostream>
using namespace std;

int main() {
  int n, m, x, t, d; cin >> n >> m >> x >> t >> d;

  if (x <= m) {
    cout << t << endl;
    return 0;
  }

  cout << t - (x-m)*d << endl;
  return 0;
}
