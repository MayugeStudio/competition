#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long N;

int main() {
  string ans;
  cin >> N;

  // solving by reversed order
  while (N != 0) {
    if (N % 2 == 1) {
      ans += 'A'; N--;
    } else {
      ans += 'B'; N /= 2;
    }
  }

  reverse(ans.begin(), ans.end());

  cout << ans << endl;
  return 0;
}
