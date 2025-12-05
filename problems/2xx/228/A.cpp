#include <iostream>
using namespace std;

int s, t;
float x;

int main() {
  cin >> s >> t >> x;
  x += 0.5;
  if (t == 0) t = 24;

  // t > s
  if (t >= s && t < 24) {
    if (x >= s && x < t) cout << "Yes" << endl;
    else cout << "No" << endl;
  } else {
  // t < s
    if ((x >= s && x < 23) || x < t) {
      cout << "Yes" << endl;
    } else cout << "No" << endl;
  }

  return 0;
}
