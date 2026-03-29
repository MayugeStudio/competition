#include <iostream>
using namespace std;
using ll = long long;
int main() {
  ll q; cin >> q;
  ll volume = 0;
  bool playing = false;
  for (int i=0; i<q; ++i) {
    int a; cin >> a;
    if (a == 1) {
      volume += 1;
    } else if (a == 2) {
      if (volume >= 1) volume -= 1;
    } else if (a == 3) {
      playing = !playing;
    }

    if (volume >= 3 && playing) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
