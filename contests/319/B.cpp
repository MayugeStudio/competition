#include <iostream>
#include <string>
using namespace std;

int N;

int main() {
  cin >> N;
  string ans;

  for (int i=0; i<N+1; ++i) {
    bool found = false;
    for (int j=1; j<10; ++j) {
      if (N % j != 0) continue;

      if (i * j % N == 0) {
        ans += (char)('0' + j);
        found = true;
        break;
      }
    }

    if (!found) ans += '-';

  }

  cout << ans << endl;
  return 0;
}
