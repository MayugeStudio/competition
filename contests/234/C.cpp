#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long

ll k;
string ans;

int main() {
  cin >> k;

  while (k != 0) {
    if (k & 0b01) {
      ans += "2";
    } else {
      ans += "0";
    }
    k = k >> 1;
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
